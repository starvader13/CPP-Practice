#include <bits/stdc++.h>
#include<iomanip>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int q,p;
        cin>>q>>p;

        if((q)>1000){
            cout<<std::setprecision(9)<<((q*p)*0.9)<<endl;
        }
        else cout<<std::setprecision(9)<<(q*p)<<endl;
	}
	return 0;
}
