#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    string s;
	    cin>>s;
	    
	    int l = s.size();
	    int res=0;
	    
	    if(l>2){
	        res=(int)(s[l-2]-'0');
	        res=res*10;
	        res=res+(int)(s[l-1]-'0');
	    }
	    else{
	        res=stoi(s);
	    }
	    
	    cout<<res%20<<endl;
	}
	return 0;
}
