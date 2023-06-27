#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int a,b,x;
	    cin>>a>>b>>x;
	    
	    int temp = b-a;
	    
	    cout<<ceil(temp/(x*1.0))<<endl;
	}
	return 0;
}
