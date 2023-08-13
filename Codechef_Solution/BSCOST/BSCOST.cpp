#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n,x,y;
	    cin>>n>>x>>y;
	    
	    string s;
	    cin>>s;
	    
	    int count1=0,count0=0;
	    
	    for(int i=0;i<n;i++){
	       if(s[i]=='1'){
	           count1++;
	       }
	       else{
	           count0++;
	       }
	    }
	    
	    if(count1>=1 && count0>=1){
	        cout<<min(x,y)<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}
