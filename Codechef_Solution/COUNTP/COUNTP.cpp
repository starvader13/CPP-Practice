#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    int arr[n],count_odd=0,count_even=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]%2==0){
	            count_even++;
	        }
	        else{
	            count_odd++;
	        }
	    }
	    
	    if(count_odd>=2 && count_odd%2==0){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
