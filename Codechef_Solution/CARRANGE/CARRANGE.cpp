#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int p,m,v;
        cin>>p>>m>>v;

        m=m-p+1;
        cout<<m*v<<endl;

	}
	return 0;
}
