#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n,s,c,d;
	    
	    cin>>n>>s>>c>>d;
	    
	    if(s>n){
	        n=n+c;
	    }
	    else{
	        s=s+c;
	    }
	    
	    if(s>n){
	        n=n+d;
	    }
	    else{
	        s=s+d;
	    }
	    
	    if(s>n){
	       cout<<"S"<<endl;
	    }
	    else{
	       cout<<"N"<<endl;
	    }
	}
	return 0;
}
