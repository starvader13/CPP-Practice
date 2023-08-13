#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n,sum=0;
	    cin>>n;
	    
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++){
	        sum=sum+(s[i]-'0');
	    }
	    
	    if((sum+(120-n))>=90){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
