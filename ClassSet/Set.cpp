//
// Created by erabbit on 08.10.2021.
//

#include "Set.h"

Set::Set(const Set& x) : BoolVector(x)
{
    N = x.N;
}

Set::Set(char* s)
{
    n = 256;
    m = 32;
    bv = new UC[m];
    int i;
    for (i = 0; i < m; i++) bv[i] = 0;
    for (i = 0; s[i]; i++) SetUp1((int)s[i]);
    N = Weight();
}

Set& Set::operator= (const Set& x)
{
    this->BoolVector::operator=(x);
    N = this->Weight();
    return *this;
}

Set Set::operator+(char ch)
{
    Set s = *this;
    s.SetUp1(ch);
    s.N = s.Weight();
    return s;
}

Set& Set::operator+=(char ch)
{
    SetUp1(ch);
    N = Weight();
    return *this;
}

Set Set::operator-(char ch)
{
    Set s = *this;
    s.SetUp0(ch);
    s.N = s.Weight();
    return s;
}

Set& Set::operator-=(char ch)
{
    SetUp0(ch);
    N = Weight();
    return *this;
}

Set Set::operator+(Set& x)
{
    Set s = *this;
    s |= x;
    s.N = s.Weight();
    return s;
}

Set Set::operator+=(Set& x)
{
    *this |= x;
    N = Weight();
    return *this;
}

Set Set::operator*(Set& x)
{
    Set s = *this;
    s &= x;
    s.N = s.Weight();
    return s;
}

Set Set::operator*=(Set &x)
{
    (*this) &= x;
    N = Weight();
    return *this;
}

Set Set::operator-(Set& x)
{
    Set s1 = *this;
    Set s2 = s1 * x;
    s1 ^= s2;
    s1.N = s1.Weight();
    return s1;
}

Set Set::operator-=(Set& x)
{
    Set s1 = (*this) * x;
    *this ^= s1;
    N = Weight();
    return *this;
}

Set Set::operator~()
{
    Set res = *this;
    res.BoolVector::operator~();
    res.N = res.Weight();
    return res;
}

void Set::Print()
{
    if (!(this->Empty()))
    {
        for (int i = 0; i < 256; i++)
        {
            if (operator[](i))
            {
                cout << char(i) << ' ';
            }
        }
    }
    else
    {
        cout << "Empty";
    }
    cout << endl;
}

void Set::Scan(int n)
{
    cout << "enter " << n << " elements: ";
    char* s;
    s = new char[n + 1];
    cin >> s;
    Set res(s);
    *this = res;
    delete[] s;
}

bool Set::FindKey(char ch)
{
    if (operator[]((UC)ch))
    {
        return true;
    }
    return false;
}

bool Set::Empty()
{
    if (N == 0)
    {
        return true;
    }
    return false;
}

bool Set::NotEmpty()
{
    if (N != 0)
    {
        return true;
    }
    return false;
}

bool Set::operator==(Set x)
{
    if (this->BoolVector::operator==(x))
    {
        return true;
    }
    return false;
}

bool Set::operator!=(Set x)
{
    Set s = *this;
    int f = 0;
    for (int i = 0; i < N; i++)
        if (s[i] == x[i])
            f++;
    if (f == N)
        return true;
    else return false;
}

ostream& operator<< (ostream& r, Set& x)
{
    x.Print(); return r;
}

istream& operator>>(istream& r, Set& x)
{
    cout << "number of elements";
    char s[257];
    cin >> s;
    Set res(s);
    x = res;
    return r;
}