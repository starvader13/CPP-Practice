#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    
	    int temp=n;
	    
	    int count=0;
	    while(n>0){
	        if(n%10==9){
	            count++;
	        }
            // only consecutive 9 matters
	        else{
	            break;
	        }
	        n/=10;
	    }
	    
	    if(count%2==1){
	        cout<<temp+2<<endl;
	    }
	    else{
	        cout<<temp+1<<endl;
	    }
	}
	return 0;
}
