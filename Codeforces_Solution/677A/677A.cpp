#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, h;
  cin>>n>>h;

  vector<int> v;
  for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    v.push_back(temp);
  }
  
  int width = 0; 
  for(auto it:v){
    if(it>h){
      width += 2;
      continue;
    }
    width += 1;
  }

  cout<<width<<endl;
}

