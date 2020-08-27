#include <bits/stdc++.h>
using namespace std;

string str_tolower(string s){
  string res = "";
  for(char c : s){
    res += tolower(c);
  }
  return res;
}

int main(){
  string a, b;
  cin >> a >> b;
  int res = str_tolower(a).compare(str_tolower(b));
  if(res < 0){
    cout << -1;
  }else if(res > 0){
    cout << 1;
  }else{
    cout << 0;
  }
}