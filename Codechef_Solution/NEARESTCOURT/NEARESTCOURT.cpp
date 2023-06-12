#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,y;
        cin>>x>>y;

        int z = (x+y)/2;

        cout<<max(abs(x-z),abs(y-z))<<endl;
    }
}