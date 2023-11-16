#ifndef DISPLAYVEC
#define DISPLAYVEC

#include <iostream>
#include <stdio.h> //print()
#include <vector>
using namespace std;

class DisplayVec{
    public:
        DisplayVec();
        void printVector(const vector<int> v);
        int getVectMemSize(const vector<int> v);
        void printMetaVector(const vector<int> v);
        const int * getAddress(vector<int> v, int index);

    private:
}; 
#endif
