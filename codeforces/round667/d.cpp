#include <bits/stdc++.h>
using namespace std;
vector<long long> ans;
int sumDigit(long long n) {
    int sum = 0;
    string str = to_string(n);
    for(char c : str) {
        int digit = c - '0';
        sum += digit;
    }
    return sum;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        long long n, s;
        cin >> n >> s;
        string str = to_string(n);
        long long count = 0;
        int i = 0;
        while(i < str.length() && sumDigit(n) > s) {
            int revI = str.length() - 1 - i;
            if(str[revI] == '0') {
                i++;
                continue;
            }
            int digit = str[revI] - '0';
            long long val = (long long)(10 - digit) * (long long)pow(10, i);
            count += val;
            n += val;
            str = to_string(n);
            i++;
        }
        ans.push_back(count);
    }
    for(long long a : ans) {
        cout << a << endl;
    }
}