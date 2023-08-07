#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int m){
    int res=min(m,n);
    while(res>0){
        if(m%res==0 && n%res==0){
            break;
        }
        res--;
    }
    return res;
}

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    
	    cout<<gcd(n,m)<<endl;
	}
	return 0;
}
