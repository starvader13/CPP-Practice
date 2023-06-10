#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;

        if(abs(a/(x*1.0))<abs(b/(y*1.0))){
            cout<<"Chef"<<endl;
        }

        else if(abs(a/(x*1.0))>abs(b/(y*1.0))){
            cout<<"CHefina"<<endl;
        }

        else    cout<<"Both"<<endl;
    }
    return 0;
}