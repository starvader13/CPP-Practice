#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    long long int x,y;
        cin>>x>>y;

        if((((x*x*x*x))+(4*y*y))==(4*(x*x)*y)){
            cout<<"yes"<<endl;
        }
        else    cout<<"no"<<endl;
	}
	return 0;
}
