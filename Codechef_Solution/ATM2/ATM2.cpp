#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    
	    vector<int> v;
	    vector<int> res;
	    for(int i=0;i<n;i++){
	        int temp;
	        cin>>temp;
	        v.push_back(temp);
	    }
	    
	    for(auto it:v){
	        if(it<=k){
	            res.push_back(1);
	            k=k-it;
	        }
	        else res.push_back(0);
	    }
	    
	    for(auto it:res){
	        cout<<it;
	    }
	    
	    cout<<endl;
	}
	return 0;
}
