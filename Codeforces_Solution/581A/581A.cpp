#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int differentSock, sameSock;
    if(m<n){
        differentSock=m;
        sameSock = (n-m)/2;
    }
    else{
        differentSock=n;
        sameSock = (m-n)/2;
    }

    cout<<differentSock<<" "<<sameSock<<endl;
}