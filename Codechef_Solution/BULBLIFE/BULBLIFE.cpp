#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;

        int arr[n-1];
        
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
        }

        int total = n*x;
        int sum=0;

        for (int i = 0; i < n-1; i++)
        {
            sum=sum+arr[i];      
        }
        
        cout<<((sum>total)?0:(total-sum))<<endl;
    }
    return 0;
}