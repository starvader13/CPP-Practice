#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int arr[7];
        for(int i=0;i<7;i++){
            cin>>arr[i];
        }

        int sum=0;
        for(int i=0;i<7;i++){
            sum=sum+arr[i];
        }

        if(sum>3){
            cout<<"Yes"<<endl;
        }
        else    cout<<"no"<<endl;

    }
}