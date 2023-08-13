#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int a,b,c;
        cin>>a>>b>>c;

        int temp1=max(a+b,b+c);
        temp1=max(temp1,a+c);

        cout<<temp1<<endl;
	}
	return 0;
}
