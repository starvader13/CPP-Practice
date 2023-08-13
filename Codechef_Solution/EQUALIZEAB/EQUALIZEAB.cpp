#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int a,b,x;
	    cin>>a>>b>>x;
	    
	    if((abs(a-b)%(x*2)==0) || a==b ){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
