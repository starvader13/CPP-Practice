#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
        cin>>n;

        int arr[n];
        int j=0;
        for (int i = n; i > 0; i--){
            arr[j]=i;
            j++;    
        }
        
        for (int i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }

        cout<<endl;
	}
	return 0;
}
