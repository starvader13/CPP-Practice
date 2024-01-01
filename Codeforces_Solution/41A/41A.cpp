#include<bits/stdc++.h>
using namespace std;

int main(){
  string s, rev;
  cin>>s>>rev;
  
  bool check=true;

  for(int i=0; i<s.size(); i++){
    if(s[i]!=rev[s.size()-i-1]){
      check=false;
    }
  }

  if(check==true){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
} 
