#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        bool temp=false;

        for(int i=2;i<n/2;i++){
            if(n%i==0){
                temp=true;
                break;
            }
        }
        if(n==1){
            cout<<"no"<<endl;
        }
        else if(temp==true){
            cout<<"no"<<endl;
        }
        else    cout<<"yes"<<endl;
    }
    return 0;
}