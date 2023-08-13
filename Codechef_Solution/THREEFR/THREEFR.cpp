#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	   int x,y,z;
	   cin>>x>>y>>z;
	   
	   if(abs(x-y)==z || abs(y-z)==x || abs(x-z)==y){
	       cout<<"yes"<<endl;
	   }
	   else{
	       cout<<"no"<<endl;
	   }
	}
	return 0;
}
