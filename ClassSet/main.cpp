#include <iostream>
#include "Set.h"
#include <cstdio>
using namespace std;

int main()
{
    char s[257];
    cout << "Enter a string to form set: " << '\n';
    fgets(s, 256,stdin);
    Set s1(s);
    cout << "s1: ";
    s1.Print(); cout << '\n';
    int kol     = s1.Number();
    cout << "Amount of elements in s1: " << kol << '\n';
    cout << "______________________" << '\n';
    Set s2(s1);
    cout << "s2: " << s2 << '\n';
    if (s1 == s2) {
        cout << "S1 == S2" << '\n';
    }
    else { cout << "S1 != S2" << '\n'; }
    cout << "______________________" << '\n';
    if (s2.FindKey('o'))
    {
        s2 -= 'o';
    }
    else
    {
        s2 += 'o';
    }
    if (s2.FindKey('a'))
    {
        s2 -= 'a';
    }
    else
    {
        s2 += 'a';
    }
    cout << "s2: " << s2 << '\n';
    if (s1 == s2)
    {
        cout << "s1 = s2" << '\n';
    }
    else
    {
        cout << "s1 != s2" << '\n';
    }
    cout << "______________________" << '\n';
    Set s3;
    cout << "s3: " << s3 << '\n';
    cout << "is s3 empty?: ";
    if (s3.Empty())
    {
        cout << "true" << '\n';
    }
    else
    {
        cout << "false" << '\n';
    }
    cout << "______________________" << '\n';
    s3.Scan(6);
    cout << "is s3 empty?: ";
    if (s3.Empty())
    {
        cout << "true\n";
    }
    else
    {
        cout << "false\n";
    }
    cout << "s3: " << s3;
    cout << "______________________" << '\n';
    Set s4 = s3 - 'y' + 'i';
    cout << "s4: " << s4;
    cout << "______________________" << '\n';
    Set t1, t2, t3;
    t1 = s2 + s4;
    t2 = s2 * s4;
    t3 = s2 - s4;
    cout << "t1 :" << t1 << '\n';
    cout << "t2 :" << t2 << '\n';
    cout << "t3 :" << t3 << '\n';

    cout << "_______________________\n";
    Set t4, t5;
    cout << "t4 :" << t4 << '\n';
    t4 = ~s2;
    t5 = t4 * s2;
    cout << "t4 :" << t4 << '\n';
    cout << "t5 :" << t5 << '\n';
    cout << "_______________________";
    char string[257];
    cout << "\nEnter a string to form set: " << '\n';
    fgets(string, 256, stdin);
    fgets(string, 256, stdin);
    Set s5(string);
    cout << "s5: ";
    s5.Print(); cout << '\n';
    cout << "_______________________";
    s5 = s5 * s1;
    cout << "\ns5 * s1: " << s5 << '\n';
    cout << "_______________________";
    s5 = s5 + t2;
    cout << "\ns5 + t2: " << s5 << '\n';
    cout << "_______________________";
    Set s6 = s1;
    cout << "\ns6: " << s6 << '\n';
    if (s5 == s6) {
        cout << "s5 = s6" << '\n';
    }
    else { cout << "s5 != s6" << '\n'; }

    return 0;
}

