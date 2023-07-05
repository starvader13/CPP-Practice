#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
        cin>>n;

        unsigned long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        unsigned long long int max1=arr[0]+arr[n-1];
        
        for(int i=0;i<n-1;i++){
            if((arr[i]+arr[i+1])>max1){
                max1=arr[i]+arr[i+1];
            }
        }

        cout<<max1<<endl;
	}
	return 0;
}
