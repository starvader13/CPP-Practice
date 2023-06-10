#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,x,p;
        cin>>n>>x>>p;
        int total_marks = (x*3)-(n-x);

        if(total_marks>=p){
            cout<<"Pass";
        }
        else    cout<<"Fail";

        cout<<endl;
    }
    return 0;
}