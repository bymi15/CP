#include <bits/stdc++.h>
using namespace std;

int main(){
  int num;

  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      cin >> num;
      if(num == 1){
        cout << abs(2-i) + abs(2-j);
        return 0;
      }
    }
  }
}