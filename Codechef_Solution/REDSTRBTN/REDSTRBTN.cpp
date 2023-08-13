#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,y,z;
        cin>>x>>y>>z;

        int sum=x+y+z;
        if(sum>5){
            cout<<"Yes"<<endl;
        }
        else    cout<<"No"<<endl;
    }
}