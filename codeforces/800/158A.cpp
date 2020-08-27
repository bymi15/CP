#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> in;

void solve(){
  int count = 0;
  for(int i = 0; i < in.size(); i++){
    if(in[i] > 0 && in[i] >= in[k-1] ){
      count++;
    }
  }
  cout << count;
}

int main(){
  scanf("%d %d", &n, &k);
  for(int i = 0; i < n; i++){
    int num;
    cin >> num;
    in.push_back(num);
  }
  solve();
}