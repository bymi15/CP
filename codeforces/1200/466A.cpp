#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  double costPerRide = (double)b / m;
  int totalCost = 0;
  if(costPerRide <= a){
    while(n){
      if(n >= m){
        n -= m;
        totalCost += b;
      }else{
        totalCost += min(a*n, b);
        n=0;
      }
    }
    cout << totalCost;
  }else{
    cout << n * a;
  }
}