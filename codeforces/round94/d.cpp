#include <bits/stdc++.h>
using namespace std;
vector<int> ans;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<int> A(n);
        for(int i = 0; i < n; i++) {
            cin >> A[i];
        }
        int count = 0;
        for(int i = 0; i < n - 3; i++) {
            for(int j = i + 1; j < n - 2; j++) {
                for(int k = j + 1; k < n - 1; k++) {
                    for(int l = k + 1; l < n; l++) {
                        if(A[i] == A[k] && A[j] == A[l]) {
                            count++;
                        }
                    }
                }
            }
        }
        ans.push_back(count);
    }

    for(int a : ans) {
        cout << a << endl;
    }
}