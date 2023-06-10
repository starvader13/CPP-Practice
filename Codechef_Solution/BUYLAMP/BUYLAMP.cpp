#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k,x,y;
        cin>>n>>k>>x>>y;

        if(x>y){
            cout<<k*x+(n-k)*y<<endl;
        }
        else cout<<k*x+(n-k)*x<<endl;
    }
    return 0;
}