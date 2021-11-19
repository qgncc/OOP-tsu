#include <iostream>
#include<time.h>
using namespace std;

void QSort(int* arr, int b, int r);
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

void QSort(int* arr, int l, int r){

    int* stack = new int[r - l + 1];
    int top = -1;

    stack[++top] = l;
    stack[++top] = r;

    while (top >= 0) {
        r = stack[top--];
        l = stack[top--];

        int p = QSortSplit(arr, l, r);

        if (p - 1 > l) {
            stack[++top] = l;
            stack[++top] = p - 1;
        }

        if (p + 1 < r) {
            stack[++top] = p + 1;
            stack[++top] = r;
        }
    }
}
int QSortSplit(int arr[], int l, int h)
{
    int x = arr[h];
    int i = (l - 1);

    for (int j = l; j <= h - 1; j++) {
        if (arr[j] <= x) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return (i + 1);
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