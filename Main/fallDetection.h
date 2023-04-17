#pragma once
#include"../GestureDetection/DTW.h"

class fallDetection {
    bestPath* pathDTW;
    int count;
    int countTimeGesture;
public:
    bool possibleFall;
    bool detectedGesture;
    bool detectedFall;

    fallDetection(bestPath*);
    void update(bool);
};

fallDetection::fallDetection(bestPath* bestPathG) :
    pathDTW(bestPathG),
    detectedGesture(false),
    detectedFall(false),
    count(0),
    countTimeGesture(0),
    possibleFall(false)
{
}

void fallDetection::update(bool nextToTheGround) {
    float DTWx = 0;
    float DTWy = 0;
    float DTWx1 = pathDTW->GetDTW(0, 0);
    float DTWy1 = pathDTW->GetDTW(1,0);
    float DTWx2 = pathDTW->GetDTW(0, 0);
    float DTWy2 = pathDTW->GetDTW(1, 0);
    if (DTWx1 + DTWy1 < DTWx2 + DTWy2) {
        DTWx = DTWx1;
        DTWy = DTWy1;
    }
    else {
        DTWx = DTWx2;
        DTWy = DTWy2;
    }

    if (DTWx < 3042 && DTWy < 3984) {
        detectedGesture = true;
        countTimeGesture = 0;
    }
    else if (countTimeGesture > 60 || countTimeGesture == 0)
        detectedGesture = false;

    if (detectedGesture)
        countTimeGesture++;
    else
        countTimeGesture = 0;

    double sumPosition = 0;
    int sizeVector = pathDTW->sizeTwo;
    int countValid = 0;
    for (int i = sizeVector - 30; i < sizeVector; i++) {
        if (pathDTW->arrayTwo[0][i] > 0 && pathDTW->arrayTwo[1][i] > 0) {
            sumPosition += static_cast<double>(((pathDTW->arrayTwo[0][i] - pathDTW->arrayTwo[0][sizeVector])*
                (pathDTW->arrayTwo[0][i] - pathDTW->arrayTwo[0][sizeVector]))/pathDTW->arrayTwo[0][sizeVector]);
            sumPosition += static_cast<double>(((pathDTW->arrayTwo[1][i] - pathDTW->arrayTwo[1][sizeVector])*
                (pathDTW->arrayTwo[1][i] - pathDTW->arrayTwo[1][sizeVector]))/pathDTW->arrayTwo[1][sizeVector]);
            countValid++;
        }
    }

    if (countValid > 25 && !detectedFall) {
        sumPosition /= 2* static_cast<double>(countValid);
        if (sumPosition < 10 && nextToTheGround)
            possibleFall = true;
    }

    if (possibleFall)
        count++;
    else
        count = 0;

    if ((count > 210 && detectedFall)||detectedGesture) {
        possibleFall = false;
        detectedFall = false;
        count = 0;
    }
    else if (count > 150 && !detectedGesture && possibleFall && nextToTheGround) {
        detectedFall = true;
    }
}
