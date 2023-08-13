#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    vector<int> v;
	    
	    for(int i=0;i<n;i++){
	        int temp;
	        cin>>temp;
	        
	        v.push_back(temp);
	    }
	    
	    int res=0;
	    for(auto it:v){
	        res=res^it;
	    }
	    
	    cout<<res<<endl;
	}
	return 0;
}
