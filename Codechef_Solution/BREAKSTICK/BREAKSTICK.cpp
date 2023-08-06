#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    

        // When both are even or both are odd it can be divided into parts such that the parity of length of each part is same.
        // When n is even and x is odd then this case applies too
	    if((n%2==0 && x%2==1) || (n%2==1 && x%2==1) || (n%2==0 && x%2==0)){
	        cout<<"Yes"<<endl;
	    }
	    else cout<<"NO"<<endl;
	}
	return 0;
}
