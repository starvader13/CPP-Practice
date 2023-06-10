#include<bits/stdc++.h>
using namespace std;

int power(int n, int e){
    int pow=1;
    for(int i=1;i<=e;i++){
        pow *= n;
    }
    return pow;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,x;
        cin>>n>>x;

        cout<<power(2,(x-n))<<endl;
        
    }
    return 0;
}