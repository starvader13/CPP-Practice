#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;

  int enter[n], exit[n];
  for(int i=0; i<n; i++){
    cin>>exit[i];
    cin>>enter[i];
  }
  
  int max=0, count=0;
  for(int i=0;i<n;i++){
    count -= exit[i];
    count += enter[i];

    if(count>max){
      max=count;
    }
  } 

  cout<<max<<endl;
}
