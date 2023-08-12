#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int e,k;
	    cin>>e>>k;
	    
	    int count=0;
	    while(e>0){
	        count++;
	        e=e/k;
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}
