#include <bits/stdc++.h>

#include "../../utils.h"
using namespace std;

// C++ Standard Library std::sort
template <typename T>
void sort(vector<T> &arr) {
    sort(arr.begin(), arr.end());
}
template <typename T>
void sort(T arr[], int N) {
    sort(arr, arr + N);
}
template <typename T>
void sortDesc(vector<T> &arr) {
    sort(arr.rbegin(), arr.rend());
}
template <typename T>
bool comp(T a, T b) {
    return a > b;
}
template <typename T>
void sortCustom(vector<T> &arr) {
    sort(arr.begin(), arr.end(), comp);
}

int main() {
    int arr[] = {3, 4, 1, 2, 3, 5};
    logArr(arr);
    cout << endl;
    sort(arr, 6);
    logArr(arr);
    cout << endl;

    vector<char> arr2 = {'c', 'b', 'a', 'd', 'h', 'a', 'e'};
    logVec(arr2);
    cout << endl;
    sortDesc(arr2);
    logVec(arr2);
    cout << endl;

    const int NUM = 1e4;
    vector<int> arr3;
    for(int i = 0; i < NUM; i++) {
        arr3.push_back(rand() % NUM);
    }
    sort(arr3);
}