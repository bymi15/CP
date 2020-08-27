#include <bits/stdc++.h>
using namespace std;
vector<int> ans;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int p, f, cntS, cntW, s, w;
        cin >> p >> f >> cntS >> cntW >> s >> w;
        int total = p + f;
        if(total >= (s * cntS + w * cntW)) {
            ans.push_back(cntS + cntW);
            continue;
        }

        int count = 0;
        if(w < s) {
            int temp = s;
            s = w;
            w = temp;
            temp = cntS;
            cntS = cntW;
            cntW = temp;
        }

        if(total >= s * cntS) {
            count += cntS;
            total -= s * cntS;
        } else {
            count += total / s;
            total = total % s;
        }
        if(total >= w * cntW) {
            count += cntW;
            total -= w * cntW;
        } else {
            count += total / w;
            total = total % w;
        }

        ans.push_back(count);
    }

    for(int a : ans) {
        cout << a << endl;
    }
}