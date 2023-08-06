#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;;
	    
	    n=n*2;
	    
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    bool check=true;
	    sort(arr,arr+n);
	    
	    for(int i=0;i<n-2;i++){
	        if(arr[i]==arr[i+1] && arr[i]==arr[i+2]){
	            check=false;
	        }
	    }
	    
	    if(check==true){
	        cout<<"Yes"<<endl;
	    }
	    else cout<<"No"<<endl;
	}
	return 0;
}
