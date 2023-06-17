#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,y;
        cin>>x>>y;

        int temp=y;
        int count=0;
        for(int i=1;temp<x;i++){
            temp=temp+i;
            count=i;
        }
        cout<<count<<endl;
    }
}