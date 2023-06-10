#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        if(m<(n*0.9)){
            cout<<"Dining"<<endl;
        }
        else if(m>(n*0.9)){
            cout<<"Online"<<endl;
        }
        else    cout<<"Either"<<endl;
    }
    return 0;
}