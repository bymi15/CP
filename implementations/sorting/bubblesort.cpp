#include <bits/stdc++.h>

#include "../../utils.h"
using namespace std;

// Bubblesort algorithm
// Time: O(n^2)
template <typename T>
void sort(T arr[], int N) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {3, 4, 1, 2, 3, 5};
    logArr(arr);
    cout << endl;
    sort(arr, 6);
    logArr(arr);
    cout << endl;

    char arr2[] = {'c', 'b', 'a', 'd', 'h', 'a', 'e'};
    logArr(arr2);
    cout << endl;
    sort(arr2, 7);
    logArr(arr2);
    cout << endl;

    const int NUM = 1e4;
    int arr3[NUM];
    for(int i = 0; i < NUM; i++) {
        arr3[i] = rand() % NUM;
    }
    sort(arr3, NUM);
}