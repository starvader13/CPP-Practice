#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	
	while(t--){
	    long long int n,m;
	    cin>>n>>m;
	    
	    vector<long long int> a;
	    for(long long int i=0;i<n;i++){
	        long long int temp;
	        cin>>temp;
	        
	        a.push_back(temp);
	    }

        vector<long long int> b;
	    for(auto it:a){
	        if(it<=ceil(m/2.0)){
	            b.push_back(m);
	        }
	        else{
	            b.push_back(1);
	        }
	    }
	    
	    long long int sum = 0;
	    for(long long int i=0;i<n;i++){
	        sum = sum + abs(a[i]-b[i]);
	    }
	    
	    cout<<sum<<endl;
	}
	return 0;
}
