#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
        cin>>n;

        int arr[n],count=0,sum=0;

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
            // if(floor((sum/((i+1)*1.0))*100)==100){
            //     count++;
            // }

            if ((i+1)==sum){
                count++;
            }
        }

        cout<<count<<endl;
        
	}
	return 0;
}
