#include <bits/stdc++.h>
using namespace std;
vector<int> ans;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int a, b;
        cin >> a >> b;
        ans.push_back(ceil(abs(b - a) / 10.0));
    }
    for(int a : ans) {
        cout << a << endl;
    }
}