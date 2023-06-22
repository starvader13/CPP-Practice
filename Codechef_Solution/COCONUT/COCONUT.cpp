#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;

        cout<<ceil(x/(a*1.0)) + ceil(y/(b*1.0))<<endl;
    }
}