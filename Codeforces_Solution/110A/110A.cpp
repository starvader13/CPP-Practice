#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;

    int temp, count=0;

    while(t>0){
        temp = t%10;
        if(temp==4 || temp==7){
            count++;
        }
        t = t/10;
    }
    
    if(count==4 || count==7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}