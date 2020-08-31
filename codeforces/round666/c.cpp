#include <bits/stdc++.h>
using namespace std;
vector<string> ans;

int main() {
    int n;
    cin >> n;
    long long arr[n + 1];
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    cout << "1 1" << endl
         << arr[1] * (n - 1) << endl;
    if(n == 1) {
        cout << "1 1" << endl
             << "0";
    } else {
        cout << "2 " << n << endl;
    }
    for(int i = 2; i <= n; i++) {
        cout << arr[i] * (n - 1) << " ";
    }
    cout << endl
         << "1 " << n << endl;
    for(int i = 1; i <= n; i++) {
        cout << -arr[i] * n << " ";
    }
}