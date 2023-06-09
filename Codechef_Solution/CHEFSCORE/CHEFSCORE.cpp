#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,x,y;
        cin>>n>>x>>y;

        if(n*x>=y && y%(x)==0){
            cout<<"Yes"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}