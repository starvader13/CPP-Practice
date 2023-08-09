#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    int even=0,odd=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]%2==0){
	            even++;
	        }
	        else{
	            odd++;
	        }
	    }
	   
        if(n==1){
            cout<<1<<endl;
        }
	    else if(odd%2!=0){
            cout<<2<<endl;
        }
        else {
            cout<<1<<endl;
        }
	}
	return 0;
}