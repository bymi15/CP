#include <bits/stdc++.h>
using namespace std;

// Dynamic programming algorithm for matching an input string and pattern
// containing '?' and '*' wildcard patterns
// Time: O(n*m) where n = input length, m = pattern length

// Explanation:
// dp is a n+1 by m+1 table where dp[i][j] is a boolean representing whether
// the input string [0..i-1] matches pattern [0..j-1]
// Base case is dp[0][0] = true which indicates that empty input string matches
// an empty pattern ""
bool match(string input, string pattern) {
    const int n = input.length(), m = pattern.length();
    vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));
    dp[0][0] = true;
    for(int j = 1; j <= m; j++) {
        if(pattern[j - 1] == '*') {
            dp[0][j] = dp[0][j - 1];
        }
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(pattern[j - 1] == '*') {
                dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
            } else if(pattern[j - 1] == '?' || pattern[j - 1] == input[i - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            }
        }
    }
    return dp[n][m];
}

int main() {
    const int NUM_TESTCASES = 25;
    string inputs[] = {"abcdefg", "abcdefg", "abcdefg", "abcdefg", "abcdefg", "abcdefg", "abcdefg", "abcdefg", "abcdefg", "abcdefg", "abcdefg", "abcdefg", "abcdefg", "abcdefg", "abcdefg", "abcdefg", "abcdefg", "abcdefg", "abcdefg", "abcdefg", "abcdefg", "abcdefg", "abcdefg", "abcdefg", ""};
    string patterns[] = {"a*e?g", "abcdefg", "*", "abc*", "*efg", "a*g", "abc*efg", "abcd*efg", "**", "***g", "*************", "a*b*c*e*f*g", "?bcdefg", "abcdef?", "abc?efg", "???????", "abcefg", "abcddefg", "abcxefg", "*f", "*c*cdefg", "abc??efg", "a?b?c?e?f?g", "?", "***"};
    bool outputs[] = {true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, false, false, false, false, false, false, false, false, true};
    for(int i = 0; i < NUM_TESTCASES; i++) {
        assert(match(inputs[i], patterns[i]) == outputs[i]);
    }
    cout << "Done" << endl;
}