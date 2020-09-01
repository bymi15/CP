#include <bits/stdc++.h>

#include "../../utils.h"
using namespace std;

// Counting sort algorithm
// Condition: arr[i] < N for all 0 <= i < N
// Time: O(n)
void sort(int arr[], int N) {
    int count[N] = {0};
    for(int i = 0; i < N; i++) {
        count[arr[i]]++;
    }
    int newIndex = 0;
    for(int i = 0; i < N; i++) {
        while(count[i]-- > 0) {
            arr[newIndex++] = i;
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

    const int NUM = 1e4;
    int arr2[NUM];
    for(int i = 0; i < NUM; i++) {
        arr2[i] = rand() % NUM;
    }
    sort(arr2, NUM);
}