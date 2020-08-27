#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<int> arr(n);
    cin >> arr[0];
    int acc = arr[0];
    for(int i = 1; i < n; i++) {
        int val;
        cin >> val;
        acc += val;
        arr[i] = acc;
    }
    cin >> m;
    vector<int> labels(m);
    for(int i = 0; i < m; i++) {
        cin >> labels[i];
    }

    for(int i = 0; i < m; i++) {
        int current = labels[i];
        int left = 0;
        int right = n - 1;
        while(left < right) {
            int mid = left + (right - left) / 2;
            if(current <= arr[mid]) {
                right = mid;
            } else if(current > arr[mid]) {
                left = mid + 1;
            }
        }
        cout << left + 1 << endl;
    }
}