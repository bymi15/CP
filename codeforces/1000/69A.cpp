#include <bits/stdc++.h>
using namespace std;

int sum[3] = {0, 0, 0};

int main(){
  int N;
  cin >> N;
  while(N--){
    int acc[3];
    cin >> acc[0] >> acc[1] >> acc[2];
    sum[0] += acc[0];
    sum[1] += acc[1];
    sum[2] += acc[2];
  }
  for(int n : sum){
    if(n != 0){
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
}