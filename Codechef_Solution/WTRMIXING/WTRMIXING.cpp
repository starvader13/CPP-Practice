#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,y,a,b;
        cin>>a>>b>>x>>y;

        if(b>a){
            if((b-a)<=x){
                cout<<"Yes"<<endl;
            }
            else    cout<<"No"<<endl;
        }
        else{
            if((a-b)<=y){
                cout<<"Yes"<<endl;
            }
            else    cout<<"No"<<endl;
        }
    }
    return 0;
}