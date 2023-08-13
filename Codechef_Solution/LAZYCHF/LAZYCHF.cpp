#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,m,d;
        cin>>x>>m>>d;

        int time = min(x+d,m*x);
        cout<<time<<endl;
    }
    return 0;
}