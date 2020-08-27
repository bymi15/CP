#include <bits/stdc++.h>
using namespace std;

int n;
bool is_lucky(int num){
  while(num > 0){
    int d = num % 10;
    if(d != 4 && d != 7){
      return false;
    }
    num /= 10;
  }
  return true;
}

bool is_almost_lucky(){
  for(int i = 1; i < n; i++){
    if(n % i == 0){
      if(is_lucky(i)){
        return true;
      }
    }
  }
  return false;
}

int main(){
  cin >> n;
  if(is_lucky(n) || is_almost_lucky()){
    cout << "YES";
  }else{
    cout << "NO";
  }
}