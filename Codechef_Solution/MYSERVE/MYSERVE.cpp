#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int p,q;
        cin>>p>>q;

        if((p+q)==0){
            cout<<"Alice"<<endl;
        }
        else if((p+q+1)%4==0 || (p+q+1)%4==3){
            cout<<"Bob"<<endl;
        }
        else    cout<<"Alice"<<endl;
        
    }
    return 0;
}