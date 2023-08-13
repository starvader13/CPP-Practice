// Divide the quotient by 5 every time..until you get a smaller number then 5 because it won't be divisible by 5..

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
        cin>>n;

        long long int count = 0;
        while(n>=5){
            count = count + n/5;
            n = n/5;
        }

        cout<<count<<endl;
	}
	return 0;
}
