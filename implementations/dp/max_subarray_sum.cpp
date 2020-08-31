#include <bits/stdc++.h>

#include "../../utils.h"
using namespace std;

// Kadane's algorithm for finding the maximum subarray sum
// Time: O(n)
void max_subarray_sum(int arr[], int N) {
    int best = INT_MIN, sum = 0;
    for(int i = 0; i < N; i++) {
        sum = max(arr[i], sum + arr[i]);
        best = max(best, sum);
    }
    log(best);
}

int main() {
    int N = 5;
    int arr[N];
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    max_subarray_sum(arr, N);
}