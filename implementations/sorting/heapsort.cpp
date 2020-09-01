#include <bits/stdc++.h>

#include "../../utils.h"
using namespace std;
template <typename T>
void swap(T arr[], int i, int j) {
    T temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int leftChild(int n) { return 2 * n + 1; }
int rightChild(int n) { return 2 * n + 2; }

template <typename T>
void maxHeapify(T arr[], int i, int N) {
    int L = leftChild(i), R = rightChild(i);
    while(L < N || R < N) {
        int k = L;
        if(R < N) {
            k = R;
        }
        if(L < N && R < N) {
            k = arr[R] > arr[L] ? R : L;
        }
        if(arr[k] <= arr[i]) {
            break;
        }
        swap(arr, i, k);
        i = k;
        L = leftChild(i);
        R = rightChild(i);
    }
}

template <typename T>
void buildMaxHeap(T arr[], int N) {
    for(int i = N / 2; i >= 0; i--) {
        maxHeapify(arr, i, N);
    }
}

// Heap sort algorithm
// Time: O(n*log(n))
template <typename T>
void sort(T arr[], int N) {
    buildMaxHeap(arr, N);
    for(int i = N - 1; i >= 1; i--) {
        swap(arr, 0, i);
        maxHeapify(arr, 0, i);
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

    int arr3[10000];
    for(int i = 0; i < 10000; i++) {
        arr3[i] = rand() % 10000;
    }
    sort(arr3, 10000);
    // logArr(arr3);
    // cout << endl;
}