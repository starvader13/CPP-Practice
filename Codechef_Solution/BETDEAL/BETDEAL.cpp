#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a>>b;

        if(100-a>200-b*2){
            cout<<"Second"<<endl;
        }
        else if(100-a<200-b*2){
            cout<<"First"<<endl;
        }
        else    cout<<"BOth"<<endl;
    }
    return 0;
}