#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int x,y;
        cin>>x>>y;

        if (x==y){
            cout<<(y*2)-1<<endl;
        }
        else    cout<<(x-y)+(y*2)<<endl;
	}
	return 0;
}
