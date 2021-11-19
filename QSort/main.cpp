#include <iostream>
#include<time.h>
using namespace std;

void QSort(int* arr, int b, int t);
int QSortSplit(int* arr, int b , int t);
void printArray(int* arr, int n);
void enterArray(int* arr, int n);


int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int* arr = new int[n];
    enterArray(arr, n);
    cout << "Array: ";
    printArray(arr, n);

    cout<<'\n';

    QSort(arr, 0,n);

    cout << "Sorted array: ";
    printArray(arr, n);


    delete[] arr;
    return 0;
}

void QSort(int* arr, int b, int t){
    if (b < t){
        int border = QSortSplit(arr,b,t);
        QSort(arr, b, border);
        QSort(arr, border+1, t);
    }
}
int QSortSplit(int* arr, int b , int t){
    int p = arr[(b+t)/2];
    int i = b; int j = t;

    while (true){
        while(arr[i] < p ){
            i++
        }
        while ()
    }
}

void printArray(int* arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

void enterArray(int* arr, int n)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 100;
}