#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    int sum=0;
    while(t--){
        int choice;
        cin>>choice;

        sum=sum+choice;
    }
    if(sum){
        cout<<"Hard"<<endl;
    }
    else{
        cout<<"Easy"<<endl;
    }
}