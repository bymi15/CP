#include <bits/stdc++.h>

#include "../../utils.h"
using namespace std;
template <typename T>
void swap(T arr[], int i, int j) {
    T temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// Median of Three method for getting the pivot
template <typename T>
int getPivot(T arr[], int L, int R) {
    int mid = L + (R - L) / 2;
    if(arr[R] < arr[L]) swap(arr, R, L);
    if(arr[mid] < arr[L]) swap(arr, mid, L);
    if(arr[R] < arr[mid]) swap(arr, R, mid);
    swap(arr, mid, R);
    return R;
}

template <typename T>
int partition(T arr[], int L, int R) {
    int pivotR = getPivot(arr, L, R);
    int i = L;
    for(int j = L; j < R; j++) {
        if(arr[j] <= arr[pivotR]) {
            swap(arr, i++, j);
        }
    }
    swap(arr, i, pivotR);
    return i;
}

template <typename T>
void quickSort(T arr[], int L, int R) {
    if(L < R) {
        int p = partition(arr, L, R);
        quickSort(arr, L, p - 1);
        quickSort(arr, p + 1, R);
    }
}

// Quick sort algorithm
// Time: O(n*log(n))
template <typename T>
void sort(T arr[], int N) {
    quickSort(arr, 0, N - 1);
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