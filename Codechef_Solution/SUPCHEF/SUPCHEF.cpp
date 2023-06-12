#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int m,n,k;
        cin>>m>>n>>k;

        if(n*k<m){
            cout<<"Yes"<<endl;
        }
        else    cout<<"No"<<endl;
    }
}