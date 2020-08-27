#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    vector<long long> ans;
    while(T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int i = 0;
        long long sum = 0;
        bool isPositive = arr[0] > 0;
        int maxVal = INT_MIN;
        while(i < n) {
            if(isPositive != arr[i] > 0) {
                isPositive = arr[i] > 0;
                sum += maxVal;
                maxVal = INT_MIN;
            }
            maxVal = max(maxVal, arr[i]);
            i++;
        }
        sum += maxVal;
        ans.push_back(sum);
    }
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
}