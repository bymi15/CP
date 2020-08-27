#include <bits/stdc++.h>
using namespace std;
vector<string> ans;

bool similar(string a, string b) {
    int N = a.length();
    for(int i = 0; i < N; i++) {
        if(a[i] == b[i]) {
            return true;
        }
    }
    return false;
}

bool similarN(string a, string s, int n) {
    for(int i = 0; i <= s.length() - n; i++) {
        string temp = s.substr(i, n);
        if(!similar(a, temp)) {
            return false;
        }
    }
    return true;
}

char invert(char c) {
    return c == '0' ? '1' : '0';
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        string s;
        cin >> n;
        cin >> s;
        string originalA = s.substr(0, n);
        string newA = originalA;
        int ind = 0;
        while(ind < n) {
            if(!similarN(newA, s, n)) {
                newA = originalA;
                newA[ind] = invert(newA[ind]);
                ind++;
            } else {
                ans.push_back(newA);
                break;
            }
        }
    }

    for(string s : ans) {
        cout << s << endl;
    }
}