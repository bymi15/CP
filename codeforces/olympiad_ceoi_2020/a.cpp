#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int mul(int a, int b) {
    return ((long long)a * b) % MOD;
}

int half(int n) {
    return mul(n, (MOD + 1) / 2);
}

void add_acc(int& a, int b) {
    a += b;
    if(a >= MOD) a -= MOD;
}

int calc(int h) {
    return half(mul(h, h + 1));
}

int main() {
    int N;
    cin >> N;
    vector<int> h(N), w(N);
    for(int i = 0; i < N; i++) {
        cin >> h[i];
    }
    for(int i = 0; i < N; i++) {
        cin >> w[i];
    }

    int ans = 0;
    for(int mid = 0; mid < N; mid++) {
        int L = mid, R = mid;
        int w_left = 0, w_right = 0;
        while(L > 0 && h[L - 1] > h[mid]) {
            --L;
            add_acc(w_left, w[L]);
        }
        while(R < N - 1 && h[R + 1] >= h[mid]) {
            ++R;
            add_acc(w_right, w[R]);
        }
        int h_ways = calc(h[mid]);
        int w_ways = calc(((long long)w_left + w[mid] + w_right) % MOD);
        w_ways -= calc(w_left);
        w_ways -= calc(w_right);
        w_ways %= MOD;
        w_ways += MOD;
        w_ways %= MOD;
        add_acc(ans, mul(h_ways, w_ways));
    }
    cout << ans;
}