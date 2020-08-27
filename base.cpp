#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PB push_back
#define MP make_pair
#define SQ(a) (a)*(a)
#define FO(i,a,b) for (int i = a; i < b; i++)

typedef vector<int> vi;
typedef pair<int,int> pi;

const int nax = 1e6+5;
char in[nax], out[nax];
string s;

void solve(){
}

void read_input(){
  int n;
  scanf("%d", &n);
  scanf("%s", &in);
  scanf("%s", &out);
  getline(cin, s);
}

int main(){
  int T;
  scanf("%d", &T);
  for (int n = 1; n <= T; n++)
  {
    printf("Case #%d:", n);
    read_input();
    solve();
  }
}