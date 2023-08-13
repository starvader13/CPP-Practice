#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int k;
        cin>>k;

        int temp = k/2 * 2;
        temp = temp + (k%2)*3;

        cout<<temp<<endl;
	}
	return 0;
}
