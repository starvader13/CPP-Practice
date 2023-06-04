#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,y,d;
        cin>>x>>y>>d;

        if(abs(x-y)<=d){
            cout<<"Yes"<<endl;
        }
        else    cout<<"No"<<endl;
    }   
}