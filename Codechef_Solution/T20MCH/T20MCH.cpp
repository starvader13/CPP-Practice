#include<bits/stdc++.h>
using namespace std;

int main(){
    // int t;  
    // cin>>t;

    // while(t--){
        int r,o,c;
        cin>>r>>o>>c;

        int maxrun = (20-o)*6*6;
        if((r-c)<maxrun){
            cout<<"Yes"<<endl;
        }
        else    cout<<"No"<<endl;
    // }
    return 0;
}