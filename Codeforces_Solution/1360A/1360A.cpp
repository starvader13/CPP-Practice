#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a>>b;

        if((2*(min(a,b)))>max(a,b)){
            cout<<pow((2*(min(a,b))),2)<<endl;
        }
        else{
            cout<<pow(max(a,b),2)<<endl;
        }
    }
}