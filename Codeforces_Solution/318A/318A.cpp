#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,k;
    cin>>n>>k;

    long long int count=0;
    if(k>ceil(n/2.0)){
        count=2+(2*((k-1)-ceil(n/2.0)));
    }
    else{
        count=1+(2*(k-1));
    }

    cout<<count<<endl;
}