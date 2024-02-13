#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;

    int mxele = max(m,n);

    int numerator = 7-mxele;

    for(int i=6;i>0;i--){
        if(numerator%i==0 && 6%i==0){
            cout<<(numerator/i)<<"/"<<(6/i)<<endl;
            break;
        }
    }
}