#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n,q;
	    cin>>n>>q;
	    
	    vector<int> v;
	    vector<int> k;
	    for(int i=0;i<n;i++){
	        int temp;
	        cin>>temp;
	        v.push_back(temp);
	    }
	    
	    sort(v.begin(),v.end());
	    
	    for(int i=0;i<q;i++){
	        int temp;
	        cin>>temp;
	        
	        k.push_back(temp);
	    }
	    
	    int index,max=1000000000,temp;
	    
	    for(auto it:k){
	        for(int i=0;i<n;i++){
	            if(v[i]<=it){
	                temp=v[i];
	                if(temp<=max){
	                    max=temp;
	                    index=i;
	                }
	            }
	        }
	        int mine=1000000000;
	    
	        for(int i=index-2;i<=index+2;i++){
	            mine=min(mine,v[i]);
	        }
	    
	        cout<<mine<<endl;
	        
	    }
	    
	    
	}
	return 0;
}
