#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    int minNum = min(n, m);
    if(minNum%2==0){
        cout<<"Malvika"<<endl;
    }
    else{
        cout<<"Akshat"<<endl;
    }
}