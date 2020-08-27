#include <bits/stdc++.h>
using namespace std;
vector<string> ans;

bool inRange(int i, int N) {
    return i >= 0 && i < N;
}

bool checkRules(string w, string s, int x) {
    int N = s.length();
    for(int i = 0; i < N; i++) {
        if(s[i] == '1') {
            bool ok = false;
            if(inRange(i + x, N)) {
                if(w[i + x] == '1') {
                    ok = true;
                }
            }
            if(inRange(i - x, N)) {
                if(w[i - x] == '1') {
                    ok = true;
                }
            }
            if(!ok) return false;
        }
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        string s;
        int x;
        cin >> s;
        cin >> x;
        int N = s.length();
        string w(N, '1');
        for(int i = 0; i < N; i++) {
            if(s[i] == '0') {
                if(inRange(i + x, N)) {
                    w[i + x] = '0';
                }
                if(inRange(i - x, N)) {
                    w[i - x] = '0';
                }
            }
        }

        if(checkRules(w, s, x)) {
            ans.push_back(w);
        } else {
            ans.push_back("-1");
        }
    }

    for(string s : ans) {
        cout << s << endl;
    }
}