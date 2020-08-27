#include <bits/stdc++.h>
using namespace std;
vector<int> A;
vector<string> ans;
void findTriangle(){
  for(int k = 2; k < A.size(); k++){
    if(A[0] + A[1] <= A[k]){
      string as = to_string(1) + " " + to_string(2) + " " + to_string(k+1);
      ans.push_back(as);
      return;
    }
  }
  ans.push_back("-1");
}

int main(){
  int T;
  cin >> T;
  while(T--){
    int n;
    cin >> n;
    while(n--){
      int num;
      cin >> num;
      A.push_back(num);
    }
    findTriangle();
    A.clear();
  }
  for(string s : ans){
    cout << s << endl;
  }
}