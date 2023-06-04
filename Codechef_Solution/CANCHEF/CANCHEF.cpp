#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,y;
        cin>>x>>y;

        if(15*x>=2*y){
            cout<<"Yes"<<endl;
        }
        else    cout<<"No"<<endl;
    }
}