#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
        cin>>n;

        if(n>=7 || n%2==0){
            cout<<"Yes"<<endl;
        }
        else    cout<<"No"<<endl;
	}
	return 0;
}
