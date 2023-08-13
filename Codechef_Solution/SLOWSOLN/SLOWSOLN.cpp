#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int mt,mn,sn;
	    cin>>mt>>mn>>sn;
	    
	    int temp=ceil(sn/(mn*1.0));
	    if(temp>mt){
	        temp=mt;
	    }
	    
	    int sum=0;
	    for(int i=0;i<temp;i++){
	        if(mn<=sn){
	            sum=sum+(mn*mn);
	            sn=sn-mn;
	        }
	        else    sum=sum+(sn*sn);
	    }
	    
	    cout<<sum<<endl;
	}
	return 0;
}
