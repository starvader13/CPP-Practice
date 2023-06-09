#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        if(a+b+c==180 && a!=180 && b!=180 && c!=180 && a+b!=180 && b+c!=180 && a+c!=180){
            cout<<"Yes"<<endl;
        }
        else    cout<<"No"<<endl;
    }
}