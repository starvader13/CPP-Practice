#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    vector<int> a;
	    vector<int> b;
	    
	    for(int i=0;i<n;i++){
	        int temp;
	        cin>>temp;
	        a.push_back(temp);
	    }
	    
	    for(int i=0;i<n;i++){
	        int temp;
	        cin>>temp;
	        b.push_back(temp);
	    }
	    
	    int max=*max_element(a.begin(),a.end());
	    
	    int temp=0,index=0;
	    
	    for(int i=0;i<n;i++){
	        if(a[i]==max){
	            if(b[i]>temp){
	                temp=b[i];
	                index=i;
	            }
	        }
	    }
	    
	    cout<<index+1<<endl;
	}
	return 0;
}
