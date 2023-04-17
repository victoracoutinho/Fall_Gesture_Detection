#pragma once
#include<math.h>
#include<iostream>

using namespace std;

class MShift {
	const int sizeEstWindow = 10;
public:
	MShift(float**, float**, int, int);
	~MShift();
	float getDensityEst(int, int);
private:
	float** depthImage;
	float** probParts;
	int width;
	int height;
	int xX, yY;
	float depthAtPixel;

	float getPixeisDifs(int*);
	float getWeightExp(int*);
};

MShift::MShift(float** idepthImage, float** iprobParts, int iwidth, int iheight):
	depthImage(idepthImage),
	probParts(iprobParts),
	width(iwidth),
	height(iheight),
	xX(0),
	yY(0),
	depthAtPixel(0)
{
};

MShift::~MShift() {
};

float MShift::getPixeisDifs(int* otherPixel) {
	float sizeDif = (xX - otherPixel[0]) * (xX - otherPixel[0]);
	sizeDif += (yY - otherPixel[1])* (yY - otherPixel[1]);
	sizeDif = 1 / (sizeDif * 0.05 + 1);
	return sizeDif;
};

float MShift::getWeightExp(int* otherPixel) {
	float depthAtOtherPixel = depthImage[otherPixel[0]][otherPixel[1]];
	float weightExp = probParts[otherPixel[0]][otherPixel[1]];
	weightExp *= (weightExp != 0 ? getPixeisDifs(otherPixel):0);
	return weightExp;
};

float MShift::getDensityEst(int coordX, int coordY) {
	xX = coordX;
	yY = coordY;
	float densityEstimator = 0;
	int numberPixeis = 0;
	depthAtPixel = depthImage[xX][yY];
	if (depthAtPixel > 0) {
		for (int x = (xX-sizeEstWindow); x < (xX+sizeEstWindow); x++)
			for (int y = (yY-sizeEstWindow); y < (yY+sizeEstWindow); y++) {
				if (x < width && x >= 0 && y < height && y >= 0) {
					int otherPixel[2] = { x,y };
					densityEstimator += (depthImage[x][y] > 0 && probParts[x][y] > 0 ? getWeightExp(otherPixel) : 0);
					numberPixeis++;
				}
			}
	}
	else
		densityEstimator = -1;
	return densityEstimator;
};