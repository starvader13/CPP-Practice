#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
        cin>>n;

        int arr1[n],arr2[n];
        int count =0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>arr2[i];
        }

        for(int i=0;i<n;i++){
            if(arr1[i]>arr2[i]*2 || arr2[i]>arr1[i]*2){
                continue;
            }
            else    count++;
        }

        cout<<count<<endl;
	}
	return 0;
}
