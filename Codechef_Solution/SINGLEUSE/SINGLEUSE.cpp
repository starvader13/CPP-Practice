#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int h,x,y;
        cin>>h>>x>>y;
        h-=y;

        if(h>0){
            cout<<1+ceil(h/(x*1.0))<<endl;
        }
        else    cout<<1<<endl;
        
    }
    return 0;
}