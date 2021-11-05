#pragma once
#include "List.h"
List::List()
{
    head = new node;
    tail = new node(0, head, 0);
    head->next = tail;
}

List::List(int m)
{
    head = new node;
    tail = new node(0, head, 0);
    head->next = tail;
    for (int i = 0; i < m; i++)
    {
        int x = rand() % 100;
        AddToTail(x);
    }
}

List::List(int* a, int n)
{
    head = new node;
    tail = new node(0, head, NULL);
    head->next = tail;

    for (int i = 0; i < n; i++)
        AddToHead(a[i]);
}

List::List(List& x)
{
    head = new node;
    tail = new node(0, head, 0);
    head->next = tail;

    node* s = x.head->next;
    while (s != x.tail)
    {
        AddToTail(s->key);
        s = s->next;
    }
}

List::~List()
{
    Clear(); delete head; delete tail;
}


void List::AddAfter(int k, node* pr)
{
    try {
        if (pr == NULL) {
            throw (0);


        }
        node *q = new node;
        q->key = k;
        q->next = pr->next;
        q->prev = pr;
        pr->next = q;
        q->next->prev = q;
    }catch(int e){
        if (e == 0){
            cout << "nullptr in AddAfter";
        }
    }
}

void List::AddToTail(int x)
{
    AddAfter(x, tail->prev);
}

void List::AddToHead(int x)
{
    AddAfter(x, head);
}

void List::Del(node* p)
{
    p->prev->next=p->next;
    p->next->prev=p->prev;
    delete p;
}

void List::DelTail()
{
    Del(tail->prev);
}

void List::DelHead()
{
    Del(head->next);
}

List& List::operator= (const List& x)
{
    if (this != &x)
    {
        Clear();
        node* s = x.head->next;
        while (s != x.tail)
        {
            AddToTail(s->key);
            s = s->next;
        }
    }
    return *this;
}

bool List::operator==(const List& x) {
    node* q1 = this->head->next, *q2 = x.head->next;
    if (q1 == this->tail && q2 == x.tail) return true;

    while (q1 != NULL && q2 != NULL) {
        if (q1->key != q2->key) return false;

        q1 = q1->next;
        q2 = q2->next;
    }
    return (q1 == NULL && q2 == NULL);

}

bool List::operator!=(const List& x) {
    return !(*this == x);
}

void List::AddToHead(List x) {
    node* q = x.tail->prev;
    while (q != x.head)
    {
        AddToHead(q->key);
        q = q->prev;
    }
}

void List::AddToTail(List x) {
    node* q = x.head->next;
    while (q != x.tail)
    {
        AddToTail(q->key);
        q = q->next;
    }
}

node* List::FindKey(int x)
{
    node* q = this->head->next;
    while (q != this->tail) {
        if (q->key == x) {
            return q;
        }
        q = q->next;
    }
    cout << "Key not found" << '\n';
    return 0;
}

node *List::FindPos(int pos)
{
    node *q = this->head->next;
    int i = 0;
    while (q != this->tail && i < pos)
    {
        i++; q = q->next;
    }
    if (q->next) {
        return q;
    }
    cout << "out of bounds\n";
    return NULL;
}

bool List::Empty()
{
    return this->head->next == this->tail;
}

bool List::NotEmpty()
{
    return !Empty();
}

node* List::Max() {
    node *M = NULL;
    node *q = head->next;
    if (q == tail) {
        cout << "List is empty" << '\n';
        return M;
    }
    M = q; q = q->next;
    while (q != tail) {
        if (q->key > M->key) {
            M = q;
        }
        q = q->next;
    }
    return M;
}

node* List::Min() {
    node *M = NULL;
    node *q = head->next;
    if (q == tail) {
        cout << "List is empty" << '\n';
        return M;
    }
    M = q; q = q->next;
    while (q != tail) {
        if (q->key < M->key) {
            M = q;
        }
        q = q->next;
    }
    return M;
}

void List::Clear()
{
    while (head->next != tail) DelHead();
}

void List::Print()
{
    node* p = head->next;
    while (p != tail)
    {
        cout << p->key << ' ';
        p = p->next;
    }
}

void List::Scan(int n)
{
    Clear();
    int i, x;
    cout << "List: ";
    for (i = 0; i < n; i++)
    {
        cin >> x;
        AddToTail(x);
    }
}

ostream& operator<< (ostream& r, List& x)
{
    x.Print(); return r;
}

istream& operator>> (istream& r, List& x) {
    int n; cout << "Enter number of list elements: ";
    cin >> n;
    x.Scan(n);
    return r;
}