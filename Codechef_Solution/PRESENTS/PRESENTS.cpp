#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        cout<<((n/5)*4)+n%5<<endl;
    }
    return 0;
}