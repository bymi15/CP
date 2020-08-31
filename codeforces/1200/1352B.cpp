#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    vector<string> ans;
    while(T--) {
        int n, k;
        cin >> n >> k;
        long long arr[k];
        long long sum = 0;
        for(int i = 0; i < k - 1; i++) {
            arr[i] = 1;
            sum += 1;
        }
        bool ok = false;
        if((n - sum) % 2 != 0 && (n - sum) > 0) {
            arr[k - 1] = n - sum;
            ok = true;
        } else {
            sum = 0;
            for(int i = 0; i < k - 1; i++) {
                arr[i] = 2;
                sum += 2;
            }
            if((n - sum) % 2 == 0 && (n - sum) > 0) {
                arr[k - 1] = n - sum;
                ok = true;
            }
        }
        if(ok) {
            ans.push_back("YES");
            string a = "";
            for(int n : arr) {
                a = a + to_string(n) + " ";
            }
            ans.push_back(a.substr(0, a.size() - 1));
        } else {
            ans.push_back("NO");
        }
    }

    for(string a : ans) {
        cout << a << endl;
    }
    return 0;
}