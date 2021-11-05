
#ifndef CLASSSET_SET_H
#define CLASSSET_SET_H
#endif //CLASSSET_SET_H

#pragma once
#include <iostream>
#include "BoolVector.h"

using namespace std;

class Set : public BoolVector
{
    int N;

public:
    Set() : BoolVector(256) { N = 0; }//ñîçäàíèå ïóñòîãî ìíîæåñòâà
    Set(char*);
    Set(const Set&);
    ~Set() {};
    Set& operator= (const Set&);

    Set operator+ (char); //äîáàâëåíèå ýë-òà, ñîçäàåòñÿ íîâîå ìí-âî
    Set& operator+= (char); //äîáàâëåíèå ýë-òà, èçìåíÿåòñÿ *this

    Set operator- (char); //óäàëåíèå ýë-òà, ñîçäàåòñÿ íîâîå ìí-âî
    Set& operator-= (char); //óäàëåíèå ýë-òà, èçìåíÿåòñÿ *this

    Set operator+ (Set &); //îáúåäèíåíèå ìí-â, ñîçäàåòñÿ íîâîå ìí-âî
    Set operator+= (Set &); //îáúåäèíåíèå ìí-â, èçìåíÿåòñÿ *this

    Set operator* (Set &); //ïåðåñå÷åíèå ìí-â, ñîçäàåòñÿ íîâîå ìí-âî
    Set operator*= (Set &); //ïåðåñå÷åíèå ìí-â, èçìåíÿåòñÿ *this

    Set operator- (Set &); //ðàçíîñòü ìí-â, ñîçäàåòñÿ íîâîå ìí-âî
    Set operator-= (Set &); //ðàçíîñòü ìí-â, èçìåíÿåòñÿ *this

    Set operator~(); //äîïîëíåíèå äî óíèâåðñàëüíîãî

    bool operator== (Set);
    bool operator!= (Set);
    int Number() { return N; }

    bool FindKey(char);    	//ïðîâåðêà ïðèíàäëåæíîñòè ýë-òà ìí-âó
    bool Empty();        	      	//ïðîâåðêà ïóñòîòû ìíîæåñòâà
    bool NotEmpty();

    virtual void Print();
    virtual void Scan(int);

    friend ostream& operator << (ostream& r, Set& x);
    friend istream& operator >> (istream& r, Set& x);
};
