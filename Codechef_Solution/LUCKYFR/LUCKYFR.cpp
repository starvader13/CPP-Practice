#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	       
	    int  temp=0,count=0;
	    while(n>0){
	        temp=n%10;
	        n=n/10;
	        
	        if(temp==4){
	            count++;
	        }
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}
