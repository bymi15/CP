#include <bits/stdc++.h>
using namespace std;

int max_subarray_sum(vector<int>& nums){
  int best = INT_MIN, sum = 0;
  int i;
  for(int i = 0, i < nums.size(); i++){
    sum = max(nums[i], sum+nums[i]);
    best = max(best, sum);
  }
  return best;
}

void solve(){
  vector<int> in;
  for(int i = 0, i < 9; i++){
    int n;
    cin >> n;
    in.push_back(n);
  }
  int ans = max_subarray_sum(in);
  cout << "Ans: " << ans << endl;
}

int main(){
  int T;
  cin >> T;
  for (int n = 1; n <= T; n++)
  {
    printf("Case #%d:", n);
    solve();
  }
}