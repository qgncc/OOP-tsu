
#ifndef BOOLVECTOR_BOOLVECTOR_H
#define BOOLVECTOR_BOOLVECTOR_H

#endif //BOOLVECTOR_BOOLVECTOR_H

#pragma once
        #include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;
typedef unsigned char UC;

class BoolVector
{
    UC* bv;
    int n, m;
    int Input(const char* s, int, int, int);
    void Output(int, int);
public:
    BoolVector(int n1 = 1);
    BoolVector(const BoolVector&);
    BoolVector(const char* s);
    BoolVector(const char* s, int);
    BoolVector operator= (const BoolVector&);
    ~BoolVector() { delete[]bv; }

    UC operator[] (int);
    void Print();
    void Scan(int);
    int Weight();

    BoolVector SetUp1(int);
    BoolVector SetUp0(int);
    BoolVector Invert(int);
    BoolVector SetUp1(int col, int pos);
    BoolVector SetUp0(int col, int pos);
    BoolVector Invert(int col, int pos);

    bool operator== (BoolVector);
    bool operator!= (BoolVector);
    bool operator< (BoolVector);
    bool operator> (BoolVector);

    BoolVector operator& (BoolVector&);
    BoolVector operator| (BoolVector&);
    BoolVector operator^ (BoolVector&);
    BoolVector operator~ ();
    BoolVector operator<< (int);
    BoolVector operator>> (int);

    BoolVector& operator &=(BoolVector& x);
    BoolVector& operator |=(BoolVector& x);
    BoolVector& operator ^=(BoolVector& x);
    BoolVector& operator <<=(int);
    BoolVector operator>>= (int);

    friend ostream& operator<< (ostream& r, BoolVector& x);
    friend istream& operator>> (istream& r, BoolVector& x);
};

