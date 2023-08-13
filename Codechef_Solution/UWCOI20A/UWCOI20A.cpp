#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    int arr[n],max=0;
	    
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]>max){
	            max=arr[i];
	        }
	    }
	    
	    cout<<max<<endl;
	}
	return 0;
}
