
#ifndef BOOLVECTORARRAY_BOOLMATRIX_H
#define BOOLVECTORARRAY_BOOLMATRIX_H


#endif //BOOLVECTORARRAY_BOOLMATRIX_H

typedef unsigned char UC;
#include <iostream>
#include "BoolVector.h"

using namespace std;

class BoolMatrix
{
    BoolVector* BM;
    int m, n; // m - amount of vectors, n - max length of vectors
    int Max(char** s, int m);

public:
    BoolMatrix();
    BoolMatrix(int m1, int n1);
    BoolMatrix(char**, int);
    BoolMatrix(const BoolMatrix&);
    ~BoolMatrix();

    void Scan(int, int);
    void Print();

    BoolMatrix& operator= (const BoolMatrix&);
    BoolVector& operator[] (int);
    bool operator== (BoolMatrix&);
    bool operator!= (BoolMatrix&);

    BoolMatrix SetUp1(int, int);
    BoolMatrix SetUp0(int, int);
    BoolMatrix Invert(int, int);

    BoolMatrix SetUp1(int, int, int);
    BoolMatrix SetUp0(int, int, int);
    BoolMatrix Invert(int, int, int);

    BoolMatrix operator& (BoolMatrix&);
    BoolMatrix& operator&= (BoolMatrix&);
    BoolMatrix operator| (BoolMatrix&);
    BoolMatrix& operator|= (BoolMatrix&);
    BoolMatrix operator^ (BoolMatrix&);
    BoolMatrix& operator^= (BoolMatrix&);
    BoolMatrix operator~ ();

    BoolMatrix ShiftRight(int, int);
    BoolMatrix& ShiftRightEq(int, int);
    BoolMatrix ShiftLeft(int, int);
    BoolMatrix& ShiftLeftEq(int, int);

    BoolVector Conj();
    BoolVector Disn();
    BoolVector Xor();

    friend ostream& operator<< (ostream& r, BoolMatrix& x);
    friend istream& operator>> (istream& r, BoolMatrix& x);

};



