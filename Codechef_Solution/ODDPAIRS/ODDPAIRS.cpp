#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
        int odd = n/2;
        int even= n-odd;

        cout<<odd*even*2<<endl;
	}
	return 0;
}
