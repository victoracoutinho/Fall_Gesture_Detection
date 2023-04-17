#ifndef DTW_H_INCLUDED
#define DTW_H_INCLUDED

#include <math.h>
#include <stdio.h>
#include <stdbool.h>
#include <iostream>
#include<fstream>
using namespace std;

class bestPath {
public:
    int** arrayTwo;
    int sizeTwo;
	
    bestPath(int);
    ~bestPath();
    bool setNewPosition(int*);
    float GetDTW(int, int);
private:
    int** baseArrayOne;
    int sizeBaseOne;
    int** baseArrayTwo;
    int sizeBaseTwo;
	
    float** GetDNMMatrix(int*, int*, int, int);
    float GetCost(float, float);
    float GetMin(float, float, float);
    int** ReadBaseGesture(int);
};

 bestPath::bestPath(int sizeVector) :
     sizeTwo(sizeVector)
 {
     baseArrayTwo = ReadBaseGesture(1);
     sizeBaseTwo = sizeBaseOne;
     baseArrayOne = ReadBaseGesture(0);
     arrayTwo = new int* [2];
     for (int i = 0; i < 2; i++)
         arrayTwo[i] = new int[sizeTwo] {0};
 }

 bestPath::~bestPath()
 {
     delete[] baseArrayOne[0];
     delete[] baseArrayOne[1];
     delete[] baseArrayOne;
     delete[] arrayTwo[0];
     delete[] arrayTwo[1];
     delete[] arrayTwo;
 }

 bool bestPath::setNewPosition(int* position) {
     for (int i = 0; i < sizeTwo - 1; i++) {
         arrayTwo[0][i] = arrayTwo[0][i + 1];
         arrayTwo[1][i] = arrayTwo[1][i + 1];
     }
     arrayTwo[0][sizeTwo - 1] = position[0];
     arrayTwo[1][sizeTwo - 1] = position[1];
     return true;
 }

float bestPath::GetDTW(int whichDimension, int whichBase)
{
    int* newArrayTwo = new int[sizeTwo];
    newArrayTwo[0] = 0;
    for (int i = 1; i < sizeTwo; i++)
        newArrayTwo[i] = arrayTwo[whichDimension][i] - arrayTwo[whichDimension][i - 1];

    if (whichBase == 0) {
        float** DNM = GetDNMMatrix(baseArrayOne[whichDimension], newArrayTwo, sizeBaseOne, sizeTwo);
        float DTW1 = DNM[sizeBaseOne - 1][sizeTwo - 1];
        for (int i = 0; i < sizeBaseOne; i++)
            delete[] DNM[i];
        delete[] DNM;
        return DTW1;
    }
    else {
        float** DNM = GetDNMMatrix(baseArrayTwo[whichDimension], newArrayTwo, sizeBaseTwo, sizeTwo);
        float DTW2 = DNM[sizeBaseTwo - 1][sizeTwo - 1];
        for (int i = 0; i < sizeBaseTwo; i++)
            delete[] DNM[i];
        delete[] DNM;
        return DTW2;
    }       
}

float** bestPath::GetDNMMatrix(int* vectorOfPositions1, int* vectorOfPositions2, int length1, int length2)
{
    const int N = length1;
    const int M = length2;

    float** DNM = new float*[N];
    for (int i = 0; i < N; i++)
        DNM[i] = new float[M];

    DNM[0][0] = GetCost(vectorOfPositions1[0], vectorOfPositions2[0]);

    for (int i = 1; i < N; i++)
        DNM[i][0] = DNM[i-1][0] +
                    GetCost(vectorOfPositions1[i], vectorOfPositions2[0]);

    for (int j = 1; j < M; j++)
        DNM[0][j] = DNM[0][j-1] +
                    GetCost(vectorOfPositions1[0], vectorOfPositions2[j]);

    for (int i = 1; i < N; i++)
        for (int j = 1; j < M; j++)
                    DNM[i][j] = GetMin(DNM[i - 1][j - 1], DNM[i - 1][j], DNM[i][j - 1])
                    + GetCost(vectorOfPositions1[i], vectorOfPositions2[j]);

    return DNM;
}


float bestPath::GetCost(float number1, float number2)
{
    float cost = (number1 - number2)*(number1 - number2);
    return cost;
}


float bestPath::GetMin(float number1, float number2, float number3)
{
    float numberMin = number1;

    if (numberMin > number2)
        numberMin = number2;
    if (numberMin > number3)
        numberMin = number3;

    return numberMin;
}

int** bestPath::ReadBaseGesture(int witchBase)
{
    const int numberOfDimentions = 2;
    const int numberOfBytes = 4;
    int** Streams = new int*[numberOfDimentions];
    ifstream Stream;
    string fileName;
    if(witchBase == 0)
        fileName = "C:/Users/victo/OneDrive - unb.br/TCC - Documentos/FallAndGestureDetection/GestureDetection/gestures/baseGesture.bin";
    else
        fileName = "C:/Users/victo/OneDrive - unb.br/TCC - Documentos/FallAndGestureDetection/GestureDetection/gestures/baseGesture2.bin";
    sizeBaseOne = 0;

    Stream.open(fileName, ios::binary);

    Stream.seekg(0, Stream.end);
    long int lengthOfFile = Stream.tellg();
    Stream.seekg(0,Stream.beg);
    lengthOfFile--;
    lengthOfFile /= (numberOfBytes * 2 + 1);
    lengthOfFile--;

    Streams[0] = new int[lengthOfFile];
    Streams[1] = new int[lengthOfFile];
    for(int m = 0; m < lengthOfFile; m++){
        char initData;
        do{
            Stream.get(initData);
        }while(initData != 'D'&& initData != EOF);

        if (initData == EOF)
        {
            for (int i = m; i < lengthOfFile; i++) {
                Streams[0][m] = Streams[0][m - 1];
                Streams[1][m] = Streams[1][m - 1];
            }
            break;
        }
        Stream.read((char*)&Streams[0][m],numberOfBytes);
        Stream.read((char*)&Streams[1][m],numberOfBytes);

        bool notCount = true;
        for(int d = 0; d < numberOfDimentions; d++){
            if((Streams[d][m] > 640) || (Streams[d][m] < 0)){
                m--;
                notCount = true;
                lengthOfFile--;
                break;
            }else
                notCount = false;
        }
        if (notCount == false) 
            sizeBaseOne++;
    }
    Stream.close();
    
    int** newBase = new int* [numberOfDimentions];
    newBase[0] = new int[sizeBaseOne];
    newBase[1] = new int[sizeBaseOne];
    newBase[0][0] = 0;
    newBase[1][0] = 0;
    for (int i = 1; i < sizeBaseOne; i++) {
        newBase[0][i] = Streams[0][i] - Streams[0][i - 1];
        newBase[1][i] = Streams[1][i] - Streams[1][i - 1];
    }

    return newBase;
}
#endif // DTW_H_INCLUDED
