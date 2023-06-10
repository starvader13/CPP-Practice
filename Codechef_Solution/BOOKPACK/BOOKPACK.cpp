#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,y,z;
        cin>>x>>y>>z;

        cout<<x*(ceil(y/(z*1.0)))<<endl;
    }
    return 0;
}