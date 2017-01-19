#include <iostream>
#include <vector>
#include <ctime>
#include <chrono>
using namespace std;

void selectionSort1(int arr[], int n) {
    //int n = sizeof(arr) / sizeof(arr[0]);
    int minIndex, tmp;
    for(int i = 0; i < n - 1; i ++) {
        minIndex = i;
        for(int j = i + 1; j < n; j ++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if(minIndex != i) {
            tmp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = tmp;
        }
    }
}
void selectionSort2(vector <int>& arr, int n) {
    int minIndex, tmp;
    for(int i = 0; i < n - 1; i ++) {
        minIndex = i;
        for(int j = i + 1; j < n; j ++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if(minIndex != i) {
            tmp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = tmp;
        }
    }
}
int main() {
    int n = 10;
    int a[10];
    vector <int> b;
    for(int i = 0; i < n; i ++) {
        a[i] = rand() % 100 + 1;
        b.push_back(rand() % 100 + 1);
    }

    for(int i = 0; i < n; i ++) {
        cout << a[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < n; i ++) {
        cout << b[i] << " ";
    }
    cout << endl;

    //clock_t start = clock();
    auto start = chrono::high_resolution_clock::now();

    selectionSort1(a, n);

    auto end = chrono::high_resolution_clock::now();

    selectionSort2(b, n);

    for(int i = 0; i < n; i ++) {
        cout << a[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < n; i ++) {
        cout << b[i] << " ";
    }
    cout << endl;

    cout << "array time " << end - start

    return 0;
}