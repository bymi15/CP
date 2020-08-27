#include <bits/stdc++.h>
using namespace std;

int main(){
  int T, x = 0;
  cin >> T;
  while(T--){
    string s;
    cin >> s;
    if(s[1] == '+'){
      x++;
    }else{
      x--;
    }
  }
  cout << x;
}