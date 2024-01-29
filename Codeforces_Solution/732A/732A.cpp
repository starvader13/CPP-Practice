#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, r;
    cin>>k>>r;

    bool check=true;
    int i=1, temp=k;

    while(check){
        if(temp%10==0 || temp%10==r){
            check=false;
            break;
        }
        i++;
        temp = k * i;
    }
    cout<<i<<endl;
}