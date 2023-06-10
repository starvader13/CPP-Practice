#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        
        if (a<0){
            if(b>0 || c>0){
                cout<<"Yes"<<endl;
            }
            else    cout<<"No"<<endl;
        }
        else if (b<0){
            if(a>0 || c>0){
                cout<<"Yes"<<endl;
            }
            else    cout<<"No"<<endl;
        }
        else if (c<0){
            if(b>0 || a>0){
                cout<<"Yes"<<endl;
            }
            else    cout<<"No"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}