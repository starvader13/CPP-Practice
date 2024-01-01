#include<bits/stdc++.h>
using namespace std;

string shift(string s,int index){
  int temp = s[index];
  s[index] = s[index+1];
  s[index+1] = temp;
  return s;
}

int main(){
  int n, seconds;
  cin>>n>>seconds;

  string s;
  cin>>s;

  for(int i=0;i<seconds;i++){
    for(int j=0; j<n-1;j++){
      if(s[j]=='B' && s[j+1]=='G')
      {
        s = shift(s, j);
        j++;
      }
    }
  }

  cout<<s<<endl;
}
