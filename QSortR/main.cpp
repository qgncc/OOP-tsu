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
    if (l>=r) return;
    int i = l, j = r, x = arr[(l+r)/2];

    while(i<=j){
        while (arr[i] < x){
            i++;
        }
        while (arr[j] > x){
            j--;
        }
        if (i<=j){
            swap(arr[i],arr[j]);
            i++; j--;
        }
    }
    QSort(arr,l,j);
    QSort(arr,i,r);


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