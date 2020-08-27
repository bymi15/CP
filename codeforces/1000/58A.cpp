#include <bits/stdc++.h>
using namespace std;

string hello = "hello";

int main(){
  int i = 0;
  string s;
  cin >> s;
  for(char& c : s){
    if(i < hello.size() && c == hello[i]){
      i++;
    }
  }
  if(i < hello.size()){
    cout << "NO";
  }else{
    cout << "YES";
  }
}