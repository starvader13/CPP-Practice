#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,y,k;
        cin>>x>>y>>k;

        cout<<ceil(abs(x-y)/(k*1.0))<<endl;    
    }
    return 0;
}