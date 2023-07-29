#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,y,r;
        cin>>x>>y>>r;

        r=r/30;
        x=x+r;
        cout<<ceil(x/(y*1.0))<<endl;
    }
}