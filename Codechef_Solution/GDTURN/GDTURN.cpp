#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,y;
        cin>>x>>y;

        if(x+y>6){
            cout<<"Yes"<<endl;
        }
        else    cout<<"NO"<<endl;
    }
    
    return 0;
}