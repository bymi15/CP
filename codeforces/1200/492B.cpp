#include <bits/stdc++.h>
using namespace std;

int main() {
    set<long double> S;
    int n;
    long double l;
    cin >> n >> l;
    while(n--) {
        long double a;
        cin >> a;
        S.insert(a);
    }
    auto it = S.begin();
    long double ans = 0;
    while(it != S.end() && next(it) != S.end()) {
        ans = max(ans, (long double)*next(it) - (long double)*it++);
    }
    long double edgeFirst = (long double)*S.begin();
    long double edgeLast = l - (long double)*prev(S.end());
    ans /= (long double)2;
    ans = max(ans, edgeFirst);
    ans = max(ans, edgeLast);
    cout << setprecision(12) << ans;
}