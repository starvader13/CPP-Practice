#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,a,b;
        cin>>n>>a>>b;

        int time=0;
        while(n>2){
            n/=2;
            time=time+a+b;
        }
        cout<<time+a<<endl;
    }
}