#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int comb=n/100;
        n%=100;

        comb=comb + n/50;
        n%=50;
        
        comb = comb + n/10;
        n%=10;

        comb = comb + n/5;
        n%=5;

        comb = comb + n/2;
        n%=2;

        comb=comb+n;
        cout<<comb<<endl;   
    }
}