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

    int arr2[10000];
    for(int i = 0; i < 10000; i++) {
        arr2[i] = rand() % 10000;
    }
    sort(arr2, 10000);
    // logArr(arr2);
    // cout << endl;
}