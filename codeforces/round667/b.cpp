#include <bits/stdc++.h>
using namespace std;
vector<long long> ans;

int main() {
    int T;
    cin >> T;
    while(T--) {
        long long a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        if(n >= (long long)(a - x) + (b - y)) {
            ans.push_back(x * y);
            continue;
        }

        long long aa = max(a - n, x);
        long long bb = max(b - n, y);
        if(aa < bb) {
            long long diff = abs(a - aa);
            n -= diff;
            ans.push_back(aa * (b - n));
        } else {
            long long diff = abs(b - bb);
            n -= diff;
            ans.push_back((a - n) * bb);
        }
    }
    for(long long a : ans) {
        cout << a << endl;
    }
}