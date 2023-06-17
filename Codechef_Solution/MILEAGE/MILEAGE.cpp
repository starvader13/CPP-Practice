#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        float n,x,y,a,b;
        cin>>n>>x>>y>>a>>b;

        if(((n/(a*1.0))*x)<((n/(b*1.0))*y)){
            cout<<"Petrol"<<endl;
        }
        else if(((n/(a*1.0))*x)>((n/(b*1.0))*y)){
            cout<<"Diesel"<<endl;
        }
        else    cout<<"Any"<<endl;
    }
    return 0;
}