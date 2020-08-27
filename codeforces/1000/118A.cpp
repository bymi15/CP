#include <bits/stdc++.h>
using namespace std;

const string VOWELS = "AEIOUYaeiouy";

int main(){
  string ans = "";
  string s;
  cin >> s;
  for(char& c : s){
    if(VOWELS.find(c) == string::npos){
      ans += ".";
      if(isupper(c)){
        ans += tolower(c);
      }else{
        ans += c;
      }
    }
  }
  cout << ans;
}