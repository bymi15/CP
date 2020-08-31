#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    long long ans = 1e18;
    long long len = pow(1e12, 1.0 / (n - 1));
    for(int j = 1; j <= len; j++) {
        long long power = 1, sum = 0;
        for(int i = 0; i < n; i++) {
            sum += abs(arr[i] - power);
            power *= j;
        }
        ans = min(ans, sum);
    }
    cout << ans;
}