#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    
	    int temp=k*(k+1)/2;
	    
	    if(n>=temp){
	        cout<<"Yes"<<endl;
	    }
	    else    cout<<"No"<<endl;
	}
	return 0;
}
