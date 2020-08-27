#include <bits/stdc++.h>
using namespace std;

int flip(vector<int> arr, int i, int j) {
    int sum = 0;
    for(int n = 0; n < arr.size(); n++) {
        if(n >= i && n <= j) {
            sum += arr[n] ^ 1;
        } else {
            sum += arr[n];
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            ans = max(ans, flip(arr, i, j));
        }
    }
    cout << ans;
}