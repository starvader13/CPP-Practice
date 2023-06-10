#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,x,p;
        int total_marks = (n-x)*3 - x;

        if(total_marks>=p){
            cout<<"Pass";
        }
        else    cout<<"Fail";

        cout<<endl;

        return 0;
    }
}