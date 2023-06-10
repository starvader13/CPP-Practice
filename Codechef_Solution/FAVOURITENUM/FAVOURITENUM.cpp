#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a;
        cin>>a;

        if(a%2==0 and a%7==0){
            cout<<"Alice"<<endl;
        }

        else if(a%2!=0 and a%9==0){
            cout<<"Bob"<<endl;
        }

        else cout<<"Charlie"<<endl;
    }
}