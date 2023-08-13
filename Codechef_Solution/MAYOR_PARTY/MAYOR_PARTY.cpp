#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int a,b,c;
        cin>>a>>b>>c;

		int maxele = max(a+c,b);
		cout<<maxele<<endl;
	}
	return 0;
}
