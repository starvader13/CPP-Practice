#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x;
        cin>>x;
        
        if(x>=1 && x<100){
            cout<<"Easy"<<endl;
        }
        else if (x>=100 && x<200){
            cout<<"Medium"<<endl;
        }
        else    cout<<"Hard"<<endl;
    }
}