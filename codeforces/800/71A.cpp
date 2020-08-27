#include <bits/stdc++.h>
using namespace std;

vector<string> in;

void solve(){
  for(int i = 0; i < in.size(); i++){
    string s = in[i];
    if(s.size() > 10){
      cout << s.substr(0, 1) << s.size() - 2 << s.substr(s.size()-1, 1) << endl;
    }else{
      cout << s << endl;
    }
  }
}

void read_input(){
  string s;
  getline(cin, s);
  in.push_back(s);
}

int main(){
  int T;
  scanf("%d\n", &T);
  for (int n = 1; n <= T; n++)
  {
    read_input();
  }
  solve();
}