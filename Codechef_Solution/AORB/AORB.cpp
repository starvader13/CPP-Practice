#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,y;
        cin>>x>>y;

        int op1 = 500-(x*2) + 1000-((x+y)*4);
        int op2 = 500-((x+y)*2) + 1000-(y*4);

        cout<<max(op1,op2)<<endl;
    }
}