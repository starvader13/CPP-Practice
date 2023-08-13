#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    long long int n;
	    cin>>n;
	    
	    int i=1,count=0;
	    while(n/i>=1){
	        n=n-i;
	        i++;
	    }
	    
	    cout<<i-1<<endl;
	}
	return 0;
}
