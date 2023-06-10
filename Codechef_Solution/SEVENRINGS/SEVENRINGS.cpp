#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;

        if(n*x>9999 && n*x<100000){
            cout<<"Yes"<<endl;
        }
        else    cout<<"No"<<endl;
    }

    return 0;
}