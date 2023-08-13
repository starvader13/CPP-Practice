#include <bits/stdc++.h>
using namespace std;


int gcd(int arr[50],int n){
    int res=*min_element(arr,arr+n);
    int check=false;
    while(res>0){
        for(int i=0;i<n;i++){
            if(arr[i]%res==0){
                check=true;
                continue;
            }
            else{
                check=false;
                break;
            }
        }
        if(check==false){
            res--;
        }
        else{
            return res;
        }
    }
    
    return res;
}

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
	    
	    int temp = gcd(arr,sizeof(arr)/sizeof(arr[0]));
        if(temp==1){
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
        }
        else{
            for(int i=0;i<n;i++){
                cout<<arr[i]/temp<<" ";
            }
        }

        cout<<endl;
	}
	return 0;
}
