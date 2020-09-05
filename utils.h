#include <bits/stdc++.h>
using namespace std;

#define log(x) cout << #x " = " << x << endl

template <typename T, size_t SIZE>
void logArr(const T (&arr)[SIZE]) {
    for(size_t i = 0; i < SIZE; ++i)
        cout << arr[i] << " ";
}

template <typename T>
void logArr(const T arr[], size_t SIZE) {
    for(size_t i = 0; i < SIZE; ++i)
        cout << arr[i] << " ";
}

template <typename T>
void logVec(const vector<T> arr) {
    for(T t : arr)
        cout << t << " ";
}