#include <bits/stdc++.h>
using namespace std;

string in;
bool capslock(){
  for(int i = 1; i < in.size(); i++){
    if(islower(in[i])){
      return 0;
    }
  }
  return 1;
}
void invertCase(){
  for(int i = 0; i < in.size(); i++){
    if(islower(in[i])){
      in[i] = toupper(in[i]);
    }else{
      in[i] = tolower(in[i]);
    }
  }
}
int main(){
  cin >> in;
  if(capslock()){
    invertCase();
  }
  cout << in;
}