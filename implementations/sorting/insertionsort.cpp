#include <bits/stdc++.h>

#include "../../utils.h"
using namespace std;

// Insertion sort algorithm
// Time: O(n^2)
template <typename T>
void sort(T arr[], int N) {
    for(int i = 1; i < N; i++) {
        int j = i;
        while(j > 0 && arr[j - 1] > arr[j]) {
            T temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
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