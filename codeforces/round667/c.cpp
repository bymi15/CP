#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
int main() {
    int T;
    cin >> T;
    while(T--) {
        int n, x, y;
        cin >> n >> x >> y;
        if(n == 2) {
            ans.push_back({x, y});
            continue;
        }

        vector<int> potAns;
        vector<int> arr;
        int maxNum = INT_MAX;
        int count = 0;
        for(int start = 1; start < 50; start++) {
            for(int i = 1; i < 50; i++) {
                for(int j = 0; j < n; j++) {
                    int num = start + i * j;
                    if(num == x || num == y) {
                        count++;
                    }
                    arr.push_back(num);
                }
                if(count == 2) {
                    if(arr[n - 1] < maxNum) {
                        maxNum = arr[n - 1];
                        potAns = vector<int>(arr);
                    }
                }
                count = 0;
                arr.clear();
            }
        }
        ans.push_back(potAns);
    }

    for(vector<int> a : ans) {
        for(int num : a) {
            cout << num << " ";
        }
        cout << endl;
    }
}