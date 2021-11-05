#include "BoolMatrix.h"
#include <iostream>
using namespace std;

int main()
{
    BoolMatrix matrix1(4, 20);
    cout << "matrix1: " << matrix1 << endl;

    matrix1.Invert(0, 8, 10);
    matrix1.SetUp1(1, 6, 14);
    matrix1.SetUp1(2, 6, 8);
    for (int i = 0; i < 20; i ++)
    {
        if (i % 2 != 0) {
            matrix1.SetUp1(3, i);
        }
    }
    cout << "matrix1(Invert, Setup1): " << matrix1 << endl;

    BoolMatrix B2(matrix1);
    cout << "B2(matrix1): " << B2;
    if (matrix1 == B2) {
        cout << "matrix1 = B2" << endl;
    }
    else { cout << "matrix1 != B2" << endl; }

    B2.ShiftRightEq(0, 6);
    B2.ShiftLeftEq(2, 6);
    B2.SetUp0(1, 16); B2.SetUp0(1, 18);
    for (int i = 0; i < 20; i+=2)
    {
        B2.Invert(3, i);
    }
    cout << "B2(Shift, Invert): " << B2;

    BoolMatrix B3(4, 20);
    cout << "Ââåäèòå Â3: ";
    cin >> B3;
    cout << "B3: " << B3 << endl;
    if (B2 == B3) {
        cout << "B2 = B3" << endl;
    }
    else { cout << "B2 != B3" << endl; }

    cout << "str: ";
    int rows = 4;
    char** arr = new char* [rows];
    for (int i = 0; i < rows; i++)
        arr[i] = new char[100];

    for (int i = 0; i < rows; i++)
        cin >> arr[i];

    for (int i = 0; i < rows; i++)
        cout << arr[i];

    BoolMatrix B4(arr, 4);
    cout << "\nB4: " << B4 << endl;

    for (int i = 0; i < rows; i++)
        delete[] arr[i];

    delete[] arr;

    BoolMatrix C1, C2, C3, C4;
    cout << "C1: " << C1;
    if (C1 == matrix1) {
        cout << "C1 = matrix1" << endl;
    }
    else { cout << "C1 != matrix1" << endl; }

    C1 = matrix1 & B2; C2 = matrix1 | B2; C3 = matrix1 ^ B2; C4 = ~B4;
    cout << "C1: " << C1;
    cout << "C2: " << C2;
    cout << "C3: " << C3;
    cout << "C4: " << C4;

    matrix1 &= B2;
    cout << "matrix1: " << matrix1;
    if (C1 == matrix1) {
        cout << "C1 = matrix1" << endl;
    }
    else { cout << "C1 != matrix1" << endl; }

    cout << "matrix1[1]: " << matrix1[1] << endl;
    int biba = matrix1[1][19];
    cout << "matrix1[1][19]: " << biba << endl;
    biba = matrix1[1][18];
    cout << "matrix1[1][18]: " << biba << endl;

    cout << "matrix1(Disj): ";
    BoolVector H;
    H = matrix1.Disn();
    cout << H;
    H = matrix1.Xor();
    cout << "matrix1(XOR) " << H;
}