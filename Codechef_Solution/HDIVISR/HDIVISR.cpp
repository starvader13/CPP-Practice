#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    if (n%10==0){
        cout<<10<<endl;
    }
    else if (n%9==0){
        cout<<9<<endl;
    }
    else if (n%8==0){
        cout<<8<<endl;
    }
    else if (n%7==0){
        cout<<7<<endl;
    }
    else if (n%6==0){
        cout<<6<<endl;
    }
    else if (n%5==0){
        cout<<5<<endl;
    }
    else if (n%4==0){
        cout<<4<<endl;
    }
    else if (n%3==0){
        cout<<3<<endl;
    }
    else if (n%2==0){
        cout<<2<<endl;
    }
    else cout<<1<<endl;
}