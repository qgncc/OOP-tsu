#include "List.h"
#include <iostream>
using namespace std;

int main()
{
    List s1(6);
    s1.Print();
    cout << '\n';
    s1.AddToHead(5);
    s1.AddToTail(70);
    cout<<"s1.AddToHead(5) s1.AddToTail(70)";
    s1.Print();
    cout << '\n';
    cout << "max: " << s1.Max()->Key() << '\n';
    cout << "min: " << s1.Min()->Key() << '\n';
    cout << '\n';
    node* found = s1.FindPos(2);
    cout << "s1.FindPos(2): " << found->Key() << '\n';
    s1.Del(found);
    cout << "s1 without pos 2: " << s1;
    cout << '\n';
    s1.DelTail();
    cout << "s1 without Tail: " << s1;
    List s2;
    s2 = s1;

    cout<<"\ns1:\n"<<s1<<"\ns2:\n"<<s2 << "\ns1==s2?\n";
    if (s1 == s2)
    {
        cout << "s1 = s2";
    }
    else {
        cout << "s1 != s2" << '\n';
    }

    found = s2.FindKey(5);
    if (found != 0)
    {
        cout << "\ns2.FindKey(5): " <<found->Key() << '\n';
    }
    s1.DelHead();
    cout << "s1 without Head: " << s1<<'\n';
    int mas[6];
    for (int i = 0; i < 6; i++)
    {
        mas[i] = rand() % 20;
    }
    List s3(mas, 6);
    cout << "s3: " << s3 << '\n';
    found = s3.FindPos(3);
    s3.AddAfter(25, found);
    cout << "s3.AddAfter(25, found): " << s3<<'\n';
    List s4(s2);
    cout << "s4:\n" << s4 << "\ns2:\n"<< s2 << "\n";
    List s5(5);
    cin >> s5;
    List  s6(s5);
    s6.AddAfter(10, s6.FindPos(3));
    cout << "\ns5:\n"<<s5<<'\n';
    cout << "\ns6:\n"<<s6<<'\n';
    if (s5 == s6)
    {
        cout << "s5 = s6";
    }
    else {
        cout << "s5 != s6";
    }
    return 0;
}