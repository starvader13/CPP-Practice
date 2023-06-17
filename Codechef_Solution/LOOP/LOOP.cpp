#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,m;
        cin>>a>>b>>m;

        cout<<min(abs(a+),abs(b-a))<<endl;
    }
    return 0;
}