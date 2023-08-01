#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    
	    int temp=n%4;
	    
	    if(k==0){
	        if(temp==0){
	            cout<<"Off"<<endl;
	        }
	        else cout<<"On"<<endl;
	    }
	    else{
	        if(temp==0){
	            cout<<"ON"<<endl;
	        }
	        else{
	            cout<<"Ambiguous"<<endl;
	        }
	    }
	}
	return 0;
}
