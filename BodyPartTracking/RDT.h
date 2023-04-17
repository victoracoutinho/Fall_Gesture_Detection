#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>

#include <iostream>
using namespace std;

#include"offsetsAndThresholds.h"
#include"leafNodes.h"

class tree : private OffsAndThres,private Nodes{

public:
    int* states;
	
    tree(int, int,float**);
    ~tree(void);
    float getProbPixel(int, int);
private:
    int width;
    int height;
    int countStates;
    float** depthImage;
    int x, y;
    float one_over_depth;
    float thresholds[3] = { 0.01f, 0.001f, 0.1f };
	
    float getThreshold(int, int);
    float getFeature(int*, int*);
    float getDepthOffset( int*);
    void generateRDT();
};

tree::tree(int widthImage, int heightImage,float** depthImageVector) :
    width(widthImage),
    height(heightImage),
    depthImage(depthImageVector),
    x(0),
    y(0),
    countStates(0)
{
    states = new int[12];
};
tree::~tree() {
    delete[] states;
};

float tree::getProbPixel(int newX, int newY) {

    x = newX;
    y = newY;
    generateRDT();
    float* probsAllParts = getProbability(states[countStates]);
    float probPHand = probsAllParts[0];
    delete[] probsAllParts;
    if (depthImage[x][y] == -1) {
        return -1;
    } else if (states[countStates] > 4095)
        return probPHand;
    else
        return -1;
};

float tree::getThreshold(int node, int layer) {
    float threshold = 0;
    if (layer % 2 == 0)
        threshold = thresholds[0];
    else
        if (node % 2 == 0)
            threshold = thresholds[1];
        else
            threshold = thresholds[2];
    return threshold;
}

float tree::getFeature(int* vectorU, int* vectorV) {
    if (depthImage[x][y] == 0)
        return 0;
    else if (depthImage[x][y] == -1)
        return -1;
    else {
        float depthU = getDepthOffset(vectorU);
        float depthV = getDepthOffset(vectorV);
        return (depthU - depthV);
    }
}

float tree::getDepthOffset( int* offset) {
    float offsetDepth = 1;
    int pixelOffsetX = x + one_over_depth*offset[0];
    int pixelOffsetY = y + one_over_depth*offset[1];

    if ((pixelOffsetX > width - 1) || pixelOffsetX < 0
			||(pixelOffsetY > height - 1) || pixelOffsetY < 0) 
        offsetDepth = 0;
    else if (depthImage[pixelOffsetX][pixelOffsetY] < 0)
        offsetDepth = 0;
    else
        offsetDepth = depthImage[pixelOffsetX][pixelOffsetY];

    return offsetDepth;
}

void tree::generateRDT() {
    delete[] states;
    states = new int[13];
    countStates = 0;
    if (depthImage[x][y] != -1) {
        int currentState = 1;
        int nextState = 1;
        one_over_depth = 1/depthImage[x][y];
        int* U = NULL;
        int* V = NULL;
        float feature = -1;
        float threshold = -1;
        while (nextState / 10000 == 0) {
            currentState = nextState;
            bool splitState = false;
            U = getOffsets(currentState, 'U');
            V = getOffsets(currentState, 'V');
            feature = getFeature(U, V);
            for (int e = 0; e < 2; e++) {
                splitState = false;
                threshold = getThreshold(currentState, countStates);
                if (feature > threshold || feature < -threshold)
                    splitState = true;
                nextState = getNextNode(currentState, splitState);
                states[countStates] = currentState;
                currentState = nextState;
                ++countStates;
            }
            free(U);
            free(V);
        }
        states[countStates] = nextState - 10000;
        states[12] = nextState - 10000;
    }
    else
        states[countStates] = -1;
}