#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
        cin>>n;

        int temp = (n%7==6)?1:0;
        temp = temp + n/7;

        cout<<temp<<endl;
	}
	return 0;
}
