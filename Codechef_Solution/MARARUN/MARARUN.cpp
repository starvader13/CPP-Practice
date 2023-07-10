#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int d1,d2,a,b,c;
	    cin>>d1>>d2>>a>>b>>c;
	    
	    int dis = d1*d2;
	    
	    if(dis>=42){
	        cout<<c<<endl;
	    }
	    else if(dis>=21){
	        cout<<b<<endl;
	    }
	    else if(dis>=10){
	        cout<<a<<endl;
	    }
	    else cout<<0<<endl;
	}
	return 0;
}
