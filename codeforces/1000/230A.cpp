#include <bits/stdc++.h>
using namespace std;

int s, n;
vector<pair<int,int>> dragon;
bool sortDescSec(const pair<int,int> &a, const pair<int,int> &b) { 
    return (a.second > b.second); 
} 

int main(){
  cin >> s >> n;
  while(n--){
    int x, y;
    cin >> x >> y;
    dragon.push_back(make_pair(x, y));
  }

  sort(dragon.begin(), dragon.end(), sortDescSec);
  
  while(dragon.size()){
    bool ok = 0;
    auto it = dragon.begin();
    while(it != dragon.end()){
      if(s > (*it).first){
        ok = 1;
        s += (*it).second;
        it = dragon.erase(it);
        break;
      }else{
        it++;
      }
    }
    if(!ok){
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
}