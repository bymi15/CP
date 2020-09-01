#include <bits/stdc++.h>

#include "../../utils.h"
using namespace std;

template <typename T>
void merge(T arr[], int L, int M, int R) {
    int LSIZE = M - L + 1, RSIZE = R - M;
    T tempArrL[LSIZE], tempArrR[RSIZE];
    for(int i = 0; i < LSIZE; i++) {
        tempArrL[i] = arr[L + i];
    }
    for(int i = 0; i < RSIZE; i++) {
        tempArrR[i] = arr[M + 1 + i];
    }

    int i = 0, j = 0, k = L;
    while(i < LSIZE && j < RSIZE) {
        if(tempArrL[i] < tempArrR[j]) {
            arr[k++] = tempArrL[i++];
        } else {
            arr[k++] = tempArrR[j++];
        }
    }
    while(i < LSIZE) {
        arr[k++] = tempArrL[i++];
    }
    while(j < RSIZE) {
        arr[k++] = tempArrR[j++];
    }
}

template <typename T>
void mergeSort(T arr[], int L, int R) {
    if(L < R) {
        int M = L + (R - L) / 2;
        mergeSort(arr, L, M);
        mergeSort(arr, M + 1, R);
        merge(arr, L, M, R);
    }
}

// Merge sort algorithm
// Time: O(n*log(n))
template <typename T>
void sort(T arr[], int N) {
    mergeSort(arr, 0, N - 1);
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