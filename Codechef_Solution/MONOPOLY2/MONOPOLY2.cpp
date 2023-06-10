#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int p,q,r,s;
        cin>>p>>q>>r>>s;

        if (p>(q+r+s)){
            cout<<"Yes"<<endl;
        }
        else if (q>(p+r+s)){
            cout<<"Yes"<<endl;
        }
        else if (r>(q+p+s)){
            cout<<"Yes"<<endl;
        }
        else if (s>(q+r+p)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}