#include <bits/stdc++.h>
using namespace std;
string s;
int aliceScore;
pair<pair<int, int>, char> maxRepeatingOnes(string str) {
  int count = 0; 
  int maxCount = 1;
  int indexFound = 0;
  for(int i = 0; i < str.length(); i++){ 
    if(str[i] == '0') count = 0; 
    else{
      count++;
      if(count >= maxCount){
        maxCount = count;
        indexFound = i;
      }
    }
  }

  count = 0;
  if(indexFound == 0 && maxCount == 1 && str[0] == '0'){
    for(int i = 0; i < str.length(); i++){ 
      if(str[i] == '1') count = 0; 
      else{
        count++;
        if(count >= maxCount){
          maxCount = count;
          indexFound = i;
        }
      }
    }
  }
  return make_pair(make_pair(indexFound, maxCount), str[indexFound]); 
} 

void solve(){
  bool turn = 1;
  while(s.length()){
    pair<pair<int, int>, char> res = maxRepeatingOnes(s);
    s.erase(res.first.first, res.first.second);
    if(turn == 1 && res.second == '1'){
      aliceScore += res.first.second;
    }
    turn ^= 1;
  }
}

int main(){
  vector<int> ans;
  int T;
  cin >> T;
  while(T--){
    cin >> s;
    aliceScore = 0;
    solve();
    ans.push_back(aliceScore);
    s = "";
  }
  for(int a : ans){
    cout << a << endl;
  }
}