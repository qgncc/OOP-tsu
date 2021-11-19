#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;
class Salesman {
public:
    int from;
    int** matrix;
    int n;
    int* arr;
    int leastDistance;

    Salesman(int size, int start);
    ~Salesman();
    void alg(int k);
    void Compute();
    void fillMatrix();

    void printMatrix();
    void printArr();
    void swap ( int i, int j );

    int getDistance();
};

int main() {
    Salesman s(5  ,3);
    s.fillMatrix();
    s.printMatrix();
    s.Compute();
    cout<<"\n\nLeast distance: "<<s.leastDistance;



    return 0;
}

Salesman::Salesman(int size, int start) {
    if(start < size)
        from = start;
    else {
        cout << "Starting point doesn't exit. Setting default point = 0";
        from = 0;
    }
    n = size;
    leastDistance=3000;
    matrix = new int*[n];
    arr = new int[n];
    for (int i = 0; i < n; i ++){
        matrix[i] = new int [n];
        arr[i] = i;
    }
    if(from != 0) swap(0,from);

}

Salesman::~Salesman() {
    for (int i = 0; i < n; i++)
        delete[] matrix[i];

    delete[] matrix;
    delete[] arr;
}

void Salesman::fillMatrix(){
    srand(time(NULL));

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j) matrix[i][j] = 0;
            else matrix[i][j] = rand() % 10 + 1;
        }
    }
}
void Salesman::printMatrix(){
    cout<<"  ";
    for (int i = 0;i<n;i++) printf(" %2d ", i);
    cout<<'\n';
    for (int i = 0; i < n; i++){
        cout<<i<<":";
        for (int j = 0; j < n; j++){

            printf(" %2d ", matrix[i][j]);
        }
        cout<<'\n';
    }
}

void Salesman::printArr(){
    cout<<'\n'<<"Array: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

void Salesman::swap (int i, int j ){
    int b = arr[i];
    arr[i] = arr[j];
    arr[j] = b;
}

int Salesman::getDistance(){
    int distance = 0;
    for(int i = 0; i < n-1; i++){
        distance += matrix[arr[i]][arr[i+1]];
    }
    int a = matrix[arr[n-1 ]][arr[0]];
    distance += a;
    return distance;
}

void Salesman::alg(int k) {
    if (k >= n) {
        printArr();
        int currentDistance = getDistance();
        cout<<"\ncurrDistance = "<< currentDistance<<"\n";
        if(currentDistance < leastDistance){
            leastDistance = currentDistance;
        }
        return;
    }

    alg(k + 1);
    for (int i = k + 1; i < n; i++) {
        swap(k, i);
        alg(k + 1);
        swap(k, i);
    }
}
void Salesman::Compute(){
    clock_t timeStart = clock();

    alg(1);

    cout<<"\n\nTime: "<<(float)(clock()-timeStart)/CLOCKS_PER_SEC;
}

