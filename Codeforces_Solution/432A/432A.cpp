#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;

    int count=0;
    for(int i=0; i<n;i++){
        int temp;
        cin>>temp;

        if(5-temp>=k){
            count++;
        }
    }

    if(count>=3){
        cout<<count/3<<endl;
    }
    else{
        cout<<0<<endl;
    }
}