#ifndef DISPLAYARR
#define DISPLAYARR

#include <iostream>
#include <stdio.h> //print()
#include <vector>
using namespace std;

class DisplayArr {
    public:
        DisplayArr();
        void printArray(const int arr [], int size);
        int getArrMemSize(const int arr[], int size);
        void printMetaArray(int arr[], int size);
        const int * getAddress(int arr[], int index);
    private:
}; 
#endif
