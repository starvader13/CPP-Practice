#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    string s;
	    cin>>s;
	    
	    char c;
	    
	    for(int i=0;i<n-1;i+=2){
	       c=s[i];
	       s[i]=s[i+1];
	       s[i+1]=c;
	    }
	    
	    for(int i=0;i<n;i++){
	        s[i]='z'-(s[i]-'a');
	    }
	    
	    cout<<s<<endl;
	    
	}
	return 0;
}
