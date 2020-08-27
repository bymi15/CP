#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  long long ans = 0, cur = 1;
  cin >> n >> m;
  while(m--){
    int num;
    cin >> num;
    long long dist = num - cur;
    if(dist < 0){
      dist += n;
    }
    ans += dist;
    cur += dist;
    if(cur > n) cur -= n;
  }
  cout << ans << endl;
}