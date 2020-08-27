#include <bits/stdc++.h>
using namespace std;

int ans;

void solve(){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if(a+b+c >= 2) ans++;
}

int main(){
  int T;
  scanf("%d\n", &T);
  ans = 0;
  for (int n = 1; n <= T; n++)
  {
    solve();
  }
  cout << ans;
}