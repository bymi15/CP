#include <bits/stdc++.h>
using namespace std;

vector<int> nums;

int main(){
  string in;
  cin >> in;
  string acc = "";
  for(char& c : in) {
    if(c == '+'){
      nums.push_back(stoi(acc));
      acc = "";
    }else{
      acc += c;
    }
  }
  nums.push_back(stoi(acc));
  
  sort(nums.begin(), nums.end());
  for(int i = 0; i < nums.size() - 1; i++){
    cout << nums[i] << "+";
  }
  cout << nums[nums.size()-1];
}