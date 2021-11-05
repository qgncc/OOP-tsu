#include <iostream>
#include "BoolVector.h"
using namespace std;

int main()
{
    BoolVector vector1, vector2(10), vector3("1111110000"), vector4("1000101011", 10), vector5("111011101110", 16);
    cout << "vector1: " << vector1 << '\n';
    cout << "vector2: " << vector2 << '\n';
    cout << "vector3: " << vector3 << '\n';
    cout << "vector4: " << vector4 << '\n';
    cout << "vector5: " << vector5 << '\n';

    cout << "vector3.Weight(): " << vector3.Weight() << '\n';
    cout << "vector5.Weight(): " << vector5.Weight() << '\n';

    if (vector3 != vector5) {
        cout << "vector3 != vector5" << '\n';
    }
    else { cout << "vector3 = vector5" << '\n'; }


    cout << "Enter vector2: ";
    cin >> vector2;
    cout << "vector2: " << vector2 << '\n';

    vector1 = vector2;
    cout << "vector1: " << vector1 << '\n';

    if (vector1 == vector2) {
        cout << "vector1 = vector2" << '\n';
    }
    else { cout << "vector1 != vector2" << '\n'; }

    BoolVector vector6(vector5);
    cout << "vector6: " << vector6 << '\n';

    BoolVector vectorAND, vectorOR, vectorXOR;
    vectorAND = vector1 & vector3, vectorOR = vector1 | vector3, vectorXOR = vector1 ^ vector3;
    cout << "vectorAND: " << vectorAND << '\n';
    cout << "vectorOR: " << vectorOR << '\n';
    cout << "vectorXOR: " << vectorXOR << '\n';

    vector1 &= vector3;
    cout << "vector1&=vector3: " << vector1 << '\n';
    if (vector1 == vectorAND) {
        cout << "vector1 = vectorAND" << '\n';
    }
    else { cout << "vector1 != vectorAND" << '\n'; }

    vector2 = vector2 |= vector3;
    cout << "vector2  |=vector3: " << vector2 << '\n';
    if (vector2 == vectorOR) {
        cout << "vector2 = vectorOR" << '\n';
    }
    else { cout << "vector2 != vectorOR" << '\n'; }

    vector1 = ~vector1;
    cout << "~vector1 : " << vector1 << '\n';
    int tmp = vector1[4];
    cout << "vector1[4]: " << tmp << '\n';
    tmp = vector1[5];
    cout << "vector1[5]: " << tmp << '\n';

    cout << "vector1.SetUp1(11):";
    vector1.SetUp1(11); cout << "vector1: " << vector1 << '\n';
    cout << "vector1.SetUp0(7): ";
    vector1.SetUp0(7);
    cout << vector1 << '\n';
    cout << "vector1.Invert(9): ";
    vector1.Invert(9);
    cout << vector1 << '\n';

    cout << "vector1.SetUp1(3, 5): ";
    vector1.SetUp1(3, 5);
    cout << vector1 << '\n';
    cout << "vector1.Invert(3, 1): ";
    vector1.Invert(3, 1);
    cout << vector1 << '\n';

    BoolVector VectorSdvig;
    VectorSdvig = vector1 << 4;
    vector1 = vector1 >> 4;
    cout << "vector1: " << vector1 << '\n';
    cout << "VectorSdvig: " << VectorSdvig << '\n';
    if (VectorSdvig == vector1) {
        cout << "VectorSdvig = vector1" << '\n';
    }
    else { cout << "VectorSdvig != vector1" << '\n'; }
}