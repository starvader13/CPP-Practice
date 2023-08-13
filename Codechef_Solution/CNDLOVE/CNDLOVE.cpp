#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    long long int sum=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]%2==1){
	            sum++;
	        }
	    }
	    
	    if(sum%2==1){
	        cout<<"YES"<<endl;
	    }
	    else cout<<"NO"<<endl;
	    
	    
	}
	return 0;
}
