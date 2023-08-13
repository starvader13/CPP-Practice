#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int s,a,b,c;;
	    cin>>s>>a>>b>>c;
	    
	    float stock;
	    if(s<0){
	        stock=s-((s*c)/100.0);
	    }
	    else{
	        stock=s+((s*c)/100.0);
	    }
	    
	    if(stock>=a && stock<=b){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	    
	}
	return 0;
}
