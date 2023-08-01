#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
        cin>>n;

        int arr[n],brr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        for(int i=0;i<n;i++){
            cin>>brr[i];
        }

        int count=0;

        for(int i=0;i<n;i++){
            if(i==0){
                if(brr[i]<=arr[i]){
                    count++;
                }
            }
            else{
                if(brr[i]<=(arr[i]-arr[i-1])){
                    count++;
                }
            }
        }

        cout<<count<<endl;

	}
	return 0;
}

