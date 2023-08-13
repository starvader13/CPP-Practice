#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int a,b,c;
        cin>>a>>b>>c;

        int temp=a+b+c;

        if(temp>=1 && (a==0 || b==0 || c==0)){
            cout<<1<<endl;
        }
        else cout<<0<<endl;
	}
	return 0;
}
