#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int r;
        cin>>r;

        if(r>=2000){
            cout<<1<<endl;
        }
        else if(r>=1600 && r<2000){
            cout<<2<<endl;
        }
        else    cout<<3<<endl;
    }
}