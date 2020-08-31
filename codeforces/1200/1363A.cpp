#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    vector<string> ans;
    while(T--) {
        int n, x;
        cin >> n >> x;
        int countOdds = 0, countEvens = 0;
        while(n--) {
            int num;
            cin >> num;
            if(num % 2 == 0) {
                countEvens++;
            } else {
                countOdds++;
            }
        }

        bool ok = false;
        if(countOdds > 0) {
            if(x <= countOdds) {
                if(x % 2 != 0 || countEvens >= 1) {
                    ok = true;
                }
            } else {
                int rem = x - countOdds;
                if(countOdds % 2 == 0) {
                    rem += 1;
                }
                if(rem <= countEvens) {
                    ok = true;
                }
            }
        }
        if(ok) {
            ans.push_back("Yes");
        } else {
            ans.push_back("No");
        }
    }

    for(string a : ans) {
        cout << a << endl;
    }
    return 0;
}