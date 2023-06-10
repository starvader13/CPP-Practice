#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        int x,y;

        cin>>n>>x>>y;

        if(n>x*y){
            cout<<"No"<<endl;
        }
        else    cout<<"Yes"<<endl;
    }
    return 0;
}