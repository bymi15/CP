#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> A;
    vector<int> B;
    int n, m;
    cin >> n;
    while(n--) {
        int d;
        cin >> d;
        A.push_back(d);
    }
    cin >> m;
    while(m--) {
        int d;
        cin >> d;
        B.push_back(d);
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int i = 0;
    int j = 0;
    int ans = 0;
    while(i < A.size() && j < B.size()) {
        if(abs(A[i] - B[j]) <= 1) {
            ans++;
            i++;
            j++;
        } else {
            if(A[i] > B[j]) {
                j++;
            } else {
                i++;
            }
        }
    }
    cout << ans;
}