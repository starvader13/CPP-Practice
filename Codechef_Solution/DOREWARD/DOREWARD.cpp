#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x;
        cin>>x;

        if(x<=3){
            cout<<"Bronze"<<endl;
        }
        else if(x>3 && x<=6){
            cout<<"Silver"<<endl;
        }
        else cout<<"Gold"<<endl;
    }
}