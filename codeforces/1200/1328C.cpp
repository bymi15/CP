#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    vector<string> ans;
    while(T--) {
        int n;
        string x;
        cin >> n >> x;
        string a = "", b = "";
        bool found = false;
        for(int i = 0; i < n; i++) {
            char ca = '0', cb = '0';
            if(found) {
                cb = x[i];
            } else {
                if(x[i] == '2') {
                    ca = '1';
                    cb = '1';
                } else if(x[i] == '1') {
                    ca = '1';
                    found = true;
                }
            }
            a.push_back(ca);
            b.push_back(cb);
        }
        ans.push_back(a);
        ans.push_back(b);
    }

    for(string a : ans) {
        cout << a << endl;
    }
    return 0;
}