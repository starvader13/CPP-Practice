#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;

  string s;
  cin>>s;

  int countD=0, countA=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='D'){
      countD++;
    }  
    else{
      countA++;
    }
  }

  if(countD>countA){
    cout<<"Danik"<<endl;
  }
  else if(countD<countA){
    cout<<"Anton"<<endl;
  }
  else{
    cout<<"Friendship"<<endl;
  }
}
