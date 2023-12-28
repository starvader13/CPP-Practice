#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;

    int cost=0;

    for(int i=01; i<=w; i++){
        cost = cost + (i*k);
    }

    cout<<(cost-n>0?(cost-n):0)<<endl;
}