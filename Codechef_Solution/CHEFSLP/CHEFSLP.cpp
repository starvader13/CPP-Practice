#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,l,x;
        cin>>n>>l>>x;

        if(l<(n-l)){
            cout<<l*x<<endl;
        }
        else cout<<(n-l)*x<<endl;
    }
}