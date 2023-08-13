#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int x,y,xr,yr,d;
	    cin>>x>>y>>xr>>yr>>d;
	    
	    xr=xr*d;
	    yr=yr*d;
	    
	    if(x>=xr && y>=yr){
	        cout<<"Yes"<<endl;
	    }
	    else    cout<<"No"<<endl;
	}
	return 0;
}
