#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        cout<<((m>=n)?n:(n*2-m))<<endl;
    }
    return 0;
}