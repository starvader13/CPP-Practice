#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n,cp=0,cn=0;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<0){
                cn++;
            }
            else if(arr[i]==0){
                cp++;
            }
        }

        if(cn%2==0 || cp>0){
            cout<<0<<endl;
        }
        else    cout<<1<<endl;
	}
	return 0;
}
