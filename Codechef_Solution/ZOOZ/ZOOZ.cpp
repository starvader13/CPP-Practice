#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    vector<int> v;
	    
	    if(n%2==0){
	        v.push_back(1);
	        for(int i=1;i<n-1;i++){
	            v.push_back(0);
	        }
	        v.push_back(1);
	    }
	    else{
	        v.push_back(0);
	        for(int i=1;i<n-1;i++){
	            v.push_back(1);
	        }
	        v.push_back(0);
	    }
	    
	    for(auto it:v){
	        cout<<it;
	    }
	    cout<<endl;
	}
	return 0;
}
