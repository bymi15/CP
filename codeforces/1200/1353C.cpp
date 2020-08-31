#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    vector<int> ans;
    while(T--) {
        int n, k;
        cin >> n >> k;
        ans.push_back(k + (k - 1) / (n - 1));
    }

    for(int a : ans) {
        cout << a << endl;
    }
    return 0;
}