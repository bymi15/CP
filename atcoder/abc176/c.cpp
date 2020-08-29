#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int prev = 0;
    long long ans = 0;
    cin >> N;
    while(N--) {
        int curr;
        cin >> curr;
        if(curr < prev) {
            ans += (prev - curr);
        } else {
            prev = curr;
        }
    }
    cout << ans;
}