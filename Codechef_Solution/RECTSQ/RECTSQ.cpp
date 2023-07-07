#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int l,b;
	    cin>>l>>b;
	    
	    int min=(l<b)?l:b;
	    while(min>0){
	        if(l%min==0 && b%min==0){
	            break;
	        }
	        min--;
	    }
        // cout<<min<<endl;
        cout<<(l/min)*(b/min)<<endl;
	}
	return 0;
}
