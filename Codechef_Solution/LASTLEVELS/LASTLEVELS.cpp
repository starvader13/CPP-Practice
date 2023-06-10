#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,y,z;
        cin>>x>>y>>z;

        if(x%3==0){
            cout<<x*y+((x/3)*z)-z<<endl;
        }
        else    cout<<x*y+((x/3)*z)<<endl;
    }
    return 0;
}