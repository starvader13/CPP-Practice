#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        char f,s,t,x,y;
        cin>>f>>s>>t>>x>>y;

        if(x==f || y==f){
            cout<<f<<endl;
        }
        else if(x==s || y==s){
            cout<<s<<endl;
        }
        else cout<<t<<endl;
    }
}