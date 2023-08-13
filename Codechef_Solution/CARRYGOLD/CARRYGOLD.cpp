#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n,x,y;
        cin>>n>>x>>y;

        if(x>((n+1)*y)){
            cout<<"No"<<endl;
        }
        else    cout<<"Yes"<<endl;
	}
	return 0;
}
