#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,y;
        cin>>x>>y;

        if(x<=y){
            cout<<abs(x-y)<<endl;
        }
        else {
            float temp = ceil(abs(x-y)/2.0);
            y = y+temp*2;
            cout<<temp+(abs(x-y))<<endl;
        }
    }
}