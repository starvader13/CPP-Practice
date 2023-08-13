#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    
	    int index=0;
	    bool check=true;
	    
	    vector<int> v;
	    for(int i=0;i<n;i++){
	        int temp;
	        cin>>temp;
	        
	        v.push_back(temp);
	    }
	    
	    int res=0;
	    for(int i=0;i<n;i++){
	        v[i]+=res;
	        res=0;
	        
	        if(v[i]<k){
	            check=false;
	            index=i+1;
	            break;
	        }
	        else{
	            v[i]=v[i]-k;
	            res=res+v[i];
	           // cout<<v[i]<<res;
	        }
	    }
	    
	    if(check==true){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<" "<<index<<endl;
	    }
	}
	return 0;
}
