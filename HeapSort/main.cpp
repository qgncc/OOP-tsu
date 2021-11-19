#include <iostream>
#include <time.h>

using namespace std;

void buildMaxHeap(int* arr, int n);
void heapSort(int* arr, int n);
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

    heapSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);


    delete[] arr;
    return 0;
}

void buildMaxHeap(int* arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[(i - 1) / 2])
        {
            int j = i;
            while (arr[j] > arr[(j - 1) / 2])
            {
                swap(arr[j], arr[(j - 1) / 2]);
                j = (j - 1) / 2;
            }
        }
    }
}

void heapSort(int* arr, int n)
{
    buildMaxHeap(arr, n);

    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        int j = 0, index;
        do
        {

            index = (2 * j + 1);
            if (arr[index] < arr[index + 1] && index < (i - 1)) {
                index++;
            }
            if (arr[j] < arr[index] && index < i) {
                swap(arr[j], arr[index]);
            }
            j = index;
        } while (index < i);
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


