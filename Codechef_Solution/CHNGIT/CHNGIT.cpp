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

        int temp=*max_element(fr,fr+101);
        cout<<n-temp<<endl;
        
	}
	return 0;
}
