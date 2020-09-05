#include <bits/stdc++.h>

#include "../../utils.h"
using namespace std;

// Basic binary search algorithm
// Time: O(log n)
template <typename T>
int search(T arr[], T val, int N) {
    int L = 0, R = N - 1;
    while(L <= R) {
        int mid = L + (R - L) / 2;
        if(arr[mid] == val) {
            return mid;
        }

        if(val < arr[mid]) {
            R = mid - 1;
        } else {
            L = mid + 1;
        }
    }
    return -1;
}

// Binary search implementation in C++ std library
template <typename T>
int std_search(T arr[], T val, int N) {
    //lower_bound returns a pointer to the first array element with value at least val
    //upper_bound returns a pointer to the first array element with value greater than val
    //equal_range returns both pointers as a pair
    auto i = lower_bound(arr, arr + N, val) - arr;
    if(i < N && arr[i] == val) {
        return (int)i;
    }
    return -1;
}

int main() {
    srand(time(NULL));

    const int NUM = 1e4;
    const int FIND_ME = rand() % NUM;
    int arr[NUM];
    for(int i = 0; i < NUM; i++) {
        arr[i] = rand() % NUM;
    }
    arr[FIND_ME] = FIND_ME;

    sort(arr, arr + NUM);

    int i = search(arr, FIND_ME, NUM);
    printf("Found %d at index %d\n", arr[i], i);

    i = std_search(arr, FIND_ME, NUM);
    printf("C++ STD: found %d at index %d\n", arr[i], i);
}