#include <bits/stdc++.h>
using namespace std;
vector<string> ans;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<string> S(n);
        map<char, int> M;
        for(int i = 0; i < n; i++) {
            cin >> S[i];
            for(char c : S[i]) {
                M[c]++;
            }
        }
        auto it = M.begin();
        bool ok = true;
        while(it != M.end()) {
            if(it->second % n != 0) {
                ok = false;
                break;
            }
            it++;
        }
        if(ok) {
            ans.push_back("YES");
        } else {
            ans.push_back("NO");
        }
    }
    for(string s : ans) {
        cout << s << endl;
    }
}