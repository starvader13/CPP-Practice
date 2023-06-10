#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,a,b;
        cin>>n>>a>>b;

        if(n%2==0){
            cout<<n/2*a + n/2*b<<endl;
        }
        else{
            cout<<(ceil(n/2.0)-1)*a + (ceil(n/2.0)*b)<<endl;
            // cout<<ceil(n/2);
        }
    }
}