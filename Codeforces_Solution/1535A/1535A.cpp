#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int arr[4];
        for(int i=0;i<4;i++){
            cin>>arr[i];
        }

        int max1 = max(arr[0], arr[1]);
        int max2 = max(arr[2], arr[3]);

        if((max1>arr[2] || max1>arr[3]) && (max2>arr[0] || max2>arr[1])){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}