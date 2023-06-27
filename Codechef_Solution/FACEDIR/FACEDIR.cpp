#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x;
        cin>>x;

        int temp = x%4;

        if(temp==0){
            cout<<"North"<<endl;
        }
        else if(temp==1){
            cout<<"East"<<endl;
        }
        else if(temp==2){
            cout<<"South"<<endl;
        }
        else    cout<<"West"<<endl;
    }
}