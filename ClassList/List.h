//
// Created by erabbit on 06.10.2021.
//

#ifndef CLASSLIST_LIST_H
#define CLASSLIST_LIST_H
#endif //CLASSLIST_LIST_H


#pragma once
#include <iostream>
using namespace std;

class node
{
    int key;
    node* prev, * next;

public:
    node()
    {
        key = 0; prev = NULL; next = NULL;
     }
    node(int k, node* pr, node* nxt)
    {
        key = k; prev = pr; next = nxt;
    }
    int& Key() { return key; }
    node*& Prev() { return prev; }
    node*& Next() { return next; }
    friend class List;
};

class List
{
    node* head, * tail;

public:
    List();
    List(int);
    List(int*, int);
    List(List&);
    ~List();
    List& operator= (const List&);

    void AddAfter(int, node*);
    void AddToTail(int);
    void AddToHead(int);
    void AddToHead(List);
    void AddToTail(List);

    void Del(node*);
    void DelTail();
    void DelHead();

    node* FindKey(int);
    node* FindPos(int);

    bool Empty();
    bool NotEmpty();
    void Clear();

    bool operator == (const List&);
    bool operator != (const List&);

    node* Max();
    node* Min();

    void Print();
    void Scan(int);

    friend ostream& operator<< (ostream& r, List& x);
    friend istream& operator>> (istream& r, List& x);
};


