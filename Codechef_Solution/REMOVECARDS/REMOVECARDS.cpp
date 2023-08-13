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
	    
	    sort(arr,arr+n);
	    int count=0, max_element=0;
	    
	    for(int i=0;i<n;i++){
	        if(arr[i]==arr[i+1]){
	            count++;
	        }
	        else{
	            max_element=max(max_element,count);
	            count=0;
	        }
	    }
	    
	    cout<<n-max_element-1<<endl;
	}
	return 0;
}
