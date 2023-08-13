#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
        int n,x,k,p;
        cin>>n>>x>>k>>p;

        if(k==n){
            p=p+20;
        }

        if(k>x){
            p=p+(x*10);
            k=k-x;
        }
        else{
            p=p+(k*10);
            k=0;
        }

        p=p+k*5;

        cout<<p<<endl;
	}
	return 0;
}
