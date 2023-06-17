#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,m;
        cin>>a>>b>>m;

        int temp1=abs(b-a);
        int temp2=+abs(temp1-m);

        cout<<min(temp1,temp2)<<endl;
    }
    return 0;
}