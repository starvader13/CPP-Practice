#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int cars=(n/4);
        int bikes=(n-(cars*4))/2;

        if(bikes>=1){
            cout<<"Yes"<<endl;
        }
        else    cout<<"No"<<endl;
    }
}