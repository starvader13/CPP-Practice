#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        int ans;
        if(n>m){
            ans = ceil((n-m)/10.0);
        }
        else{
            ans = ceil((m-n)/10.0);
        }

        cout<<ans<<endl;
    }
}