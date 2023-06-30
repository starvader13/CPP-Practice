#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
        int x,a,b;
	    cin>>x>>a>>b;

        cout<<(a+b*(100-x)) * 10<<endl;
	}
	return 0;
}
