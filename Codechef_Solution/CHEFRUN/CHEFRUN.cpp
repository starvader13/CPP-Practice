#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x1,x2,x3,v1,v2;
        cin>>x1>>x2>>x3>>v1>>v2;

        int d1=abs(x3-x1);
        int d2=abs(x3-x2);

        if((d1/(v1*1.0))>(d2/(v2*1.0))){
            cout<<"Kefa"<<endl;
        }
        else if((d1/(v1*1.0))<(d2/(v2*1.0))){
            cout<<"Chef"<<endl;
        }
        else   cout<<"Draw"<<endl;
    }
}