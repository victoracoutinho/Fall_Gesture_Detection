#pragma once
#include <iostream>
#include<fstream>
#include <opencv2/opencv.hpp>

using namespace cv;

#include"RDT.h"
#include"MShift.h"


class handStream {
public:
	handStream(float***, int, int, int);
	~handStream();
	bool update();
	int* getHandPosition();
	int** getAllHandPositions();
	float* densityMax = new float[4]{ 0 };
private:
	float*** depthImagePt;
	float** depthBackground;
	int width, height, numberBytes;
	float** probs;
	float** densities;
	float** depthImage;
	int* positionBuffer[20];
	bool statusBackground;
	const float thresholdDens = 0.14f;
	int** position = new int*[4];

	bool readBackground();
	void saveDensity(float, int, int);
	void setMPPosition();
	int* desvPosition();
	int* getMed();
	void positionFilter();

};

handStream::handStream(float*** depthStream, int widthS, int heightS, int numberOfBytes) :
	width(widthS),
	height(heightS),
	numberBytes(numberOfBytes),
	depthImagePt(depthStream)
{
	statusBackground = readBackground();
	probs = new float* [width];
	for (int i = 0; i < width; i++) 
		probs[i] = new float[height];
	densities = new float* [width];
	for (int i = 0; i < width; i++) 
		densities[i] = new float[height];
	for (int i = 0; i < 20; i++)
		positionBuffer[i] = new int[2]{ 0};
	for (int i = 0; i < 4; i++)
		position[i] = NULL;
};

handStream::~handStream()
{
	for (int i = 0; i < width; i++) {
		delete[] depthBackground[i];
		delete[] densities[i];
		delete[] probs[i];
	}
	delete[] probs;
	delete[] densities;
	delete[] depthBackground;
}

bool handStream::update() {

	if (!statusBackground)
		return false;

	depthImage = depthImagePt[0];
	unique_ptr<tree> pixelTree(new tree(width, height, depthImage));

	for (int i = 0; i < width; i++)
		if (i % 2 == 0)
			for (int j = 0; j < height; j++)
				if (depthImage[i][j] < 0.98 * depthBackground[i][j] && depthImage[i][j] != -1)
					if (j % 2 == 0)
						probs[i][j] = pixelTree->getProbPixel(i, j);
					else
						probs[i][j] = 0;

	for (int i = 1; i < width - 1; i++)
		if (i % 2 != 0)
			for (int j = 1; j < height - 1; j++)
				if (j % 2 != 0) {
					float forwardProb = (probs[i + 1][j + 1] > 0 ? probs[i + 1][j + 1] : 0) +
						(probs[i][j + 1] > 0 ? probs[i][j + 1] : 0) +
						(probs[i + 1][j] > 0 ? probs[i + 1][j] : 0);
					if (depthImage[i][j] < depthBackground[i][j] && depthImage[i][j] != -1
						&& forwardProb > thresholdDens * 0.5)
						probs[i][j] = pixelTree->getProbPixel(i, j);
				}
	pixelTree.reset();

	for (int d = 0; d < 4; d++) {
		densityMax[d] = 0;
		if (position[d] != NULL) {
			delete[] position[d];
			position[d] = NULL;
		}
	}

	unique_ptr<MShift> density(new MShift(depthImage, probs, width, height));
	for (int i = 0; i < width; i++)
		for (int j = 0; j < height; j++)
			if (depthImage[i][j] > 0 && depthImage[i][j] < 0.98 * depthBackground[i][j] && probs[i][j] > thresholdDens) {
				densities[i][j] = density->getDensityEst(i, j);
				if (densities[i][j] > 6.56261 - 3.9416 && densities[i][j] < 6.56261 + 3.9416)
					saveDensity(densities[i][j], i, j);
			}
	density.reset();
	setMPPosition();
	positionFilter();

	if (position[0] == NULL)
		return false;
	
	if (depthImage[position[0][0]][position[0][1]] < 0.97 * depthBackground[position[0][0]][position[0][1]])
		return false;
	else if (depthImage[position[0][0]][position[0][1]] > 0.97 * depthBackground[position[0][0]][position[0][1]] &&
		depthImage[position[0][0]][position[0][1]] < depthBackground[position[0][0]][position[0][1]]) {
		return true;
	}
	else
		return false;

}

void handStream::saveDensity(float newDensity, int x, int y) {
	for(int i = 3; i >= 0; i--)
		if (newDensity > densityMax[i]) {
			delete[] position[0];
			for (int c = 0; c < i; c++) {
				densityMax[c] = densityMax[c + 1];
				position[c] = position[c + 1];
			}
			densityMax[i] = newDensity;
			position[i] = new int[2]{ x,y };
			break;
		}
}

void handStream::setMPPosition() {
	bool thereIsZero = false;
	for(int i = 0; i < 4; i++)
		if (densityMax[i] == 0) {
			thereIsZero = true;
			break;
		}
	if (thereIsZero == true) {
		delete[] position[0];
		position[0] = NULL;
		return;
	}
	else {
		int* desv = desvPosition();
		if (desv[0] > 5 || desv[1] > 5) {
			int* med = getMed();
			for (int i = 0; i < 4; i++) {
				if ((position[i][0] - med[0] > 5 || position[i][0] - med[0] < -5) ||
					(position[i][1] - med[1] > 5 || position[i][1] - med[1] < -5)) {
					densityMax[i] = 0;
				}
			}
		}
	}
	position[0] = getMed();
	return;
}

int* handStream::desvPosition() {
	int med[2] = { 0 };
	int desN[2] = { 0 };
	for (int i = 0; i < 4; i++) {
		med[0] += position[i][0];
		med[1] += position[i][1];
	}
	med[0] /= 4;
	med[1] /= 4;
	for (int i = 0; i < 4; i++) {
		desN[0] += (position[i][0] - med[0] > 0 ? position[i][0] - med[0] : med[0] - position[i][0]);
		desN[1] += (position[i][1] - med[1] > 0 ? position[i][1] - med[1] : med[1] - position[i][1]);
	}
	desN[0] /= 4;
	desN[1] /= 4;

	return desN;
}

int* handStream::getMed() {
	int* med = new int[2] { 0 };
	int total = 0;
	for (int i = 0; i < 4; i++) {
		if (densityMax[i] != 0) {
			med[0] += position[i][0];
			med[1] += position[i][1];
			total++;
		}
	}
	if (total != 0) {
		med[0] /= total;
		med[1] /= total;
	}
	else {
		delete[] med;
		med = NULL;
	}

	return med;
}

int* handStream::getHandPosition() {
	return position[0];
}
int** handStream::getAllHandPositions() {
	return position;
}

bool handStream::readBackground()
{
	const int numberOfSamples = width * height;

	depthBackground = new float* [width];
	for (int x = 0; x < width; x++)
		depthBackground[x] = new float[height];
	string filename = "C:\\Users\\victo\\OneDrive - unb.br\\TCC - Documentos\\FallAndGestureDetection\\BodyPartTracking\\Images\\background.png";

	Mat depthImageFile = imread(filename);

	if (!depthImageFile.empty()) {
		for (int x = 0; x < width; x++)
			for (int y = 0; y < height; y++) {
				float bytePixel = depthImageFile.at<Vec3b>(y, x).val[0];
				depthBackground[x][y] = bytePixel / 255;
			}
	}
	else{
		_RPT1(0, "File %s was not found\n", filename.c_str());
		return false;
	}
	return true;
}

void handStream::positionFilter() {
	int sumDX = 0;
	int sumDY = 0;
	int sumP = 0;

	delete[] positionBuffer[0];
	for (int i = 0; i < 19; i++) {
		positionBuffer[i] = positionBuffer[i + 1];
	}
	if (position[0] != NULL)
		positionBuffer[19] = position[0];
	else
		positionBuffer[19] = new int[2]{ 0,0 };

	int* base = NULL;
	int endBuffer = 0;
	for (int i = 19; i >= 10; i--)
		if (positionBuffer[i][0] != 0) {
			base = positionBuffer[i];
			endBuffer = i;
			break;
		}

	for (int i = 0; i < endBuffer; i++) {
		if (positionBuffer[i][0] != 0 && positionBuffer[i][1] != 0 && base != NULL &&
			(base[0] - positionBuffer[i][0])*(base[0] - positionBuffer[i][0]) < 20 &&
			(base[1] - positionBuffer[i][1])*(base[1] - positionBuffer[i][1]) < 20){
			sumDX += (i + 1) * positionBuffer[i][0];
			sumDY += (i + 1) * positionBuffer[i][1];
			sumP += (i + 1);
		}
	}
	if (base != NULL) {
		sumDX += (20 - (19 - endBuffer)) * base[0];
		sumDY += (20 - (19 - endBuffer)) * base[1];
		sumP += (20 - (19 - endBuffer));
	}
	if (sumP == 0)
		position[0] = NULL;
	else {
		sumDX /= sumP;
		sumDY /= sumP;
		position[0] = new int[2]{ sumDX,sumDY };
	}
}