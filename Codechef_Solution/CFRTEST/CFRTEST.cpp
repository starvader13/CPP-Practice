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

        int fr[101]={0};
        for(int i=0;i<n;i++){
            fr[arr[i]]++;
        }

        int count=0;

        for(int i=0;i<=100;i++){
            if(fr[i]>=1){
                count++;
            }
        }
        cout<<count<<endl;
        
	}
	return 0;
}
