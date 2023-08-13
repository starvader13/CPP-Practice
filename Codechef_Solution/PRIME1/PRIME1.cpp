#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    long long int m,n;
        cin>>m>>n;
        
        bool check=true;
        
        for(long long int i=m;i<=n;i++){
            if(i==1){
                continue;
            }
            
            // Iterate through all numbers from 2 to ssquare root of n and for every number check if it divides n [because if a number is expressed as n = xy and any of the x or y is greater than the root of n, the other must be less than the root value]. If we find any number that divides, we return false.
            for(long long int j=2;j<i;j++){
                if(i%j==0){
                    check=false;
                    break;
                }
            }
            
            if(check==true){
                cout<<i<<endl;
            }
            else{
                check=true;
            }
        }
	}
	return 0;
}
