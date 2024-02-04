#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int cnt1=0, cnt2=0;
    while(n--){
        int x,y;
        cin>>x>>y;

        if(x>y){
            cnt1++;
        }
        else if(y>x){
            cnt2++;
        }
    }

    if(cnt1>cnt2){
        cout<<"Mishka"<<endl;
    }
    else if(cnt2>cnt1){
        cout<<"Chris"<<endl;
    }
    else{
        cout<<"Friendship is magic!^^"<<endl;
    }
}