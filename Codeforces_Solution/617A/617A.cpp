#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int count = 0;

    while(n>0){
        if(n>=5){
            count = count + n/5;
            n =  n-(5*(n/5));
        }
        else if(n==4){
            count = count + n/4;
            n =  n-(4*(n/4));
        }
        else if(n==3){
            count = count + n/3;
            n =  n-(3*(n/3));
        }
        else if(n==2){
            count = count + n/2;
            n =  n-(2*(n/2));
        }
        else{
            count++;
            n=0;
        }
    }
    cout<<count<<endl;
}