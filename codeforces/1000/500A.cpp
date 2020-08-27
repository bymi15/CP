#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, t, i = 1;
  cin >> n >> t;
  int arr[n];
  for(int x = 1; x < n; x++){
    cin >> arr[x];
  }
  while(i < t){
    i += arr[i];
    if(i == t){
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";
}