#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int b,ls;
        cin>>b>>ls;

        cout<<std::setprecision(8)<<sqrt(pow(ls,2)-pow(b,2))<<" ";
        cout<<std::setprecision(8)<<sqrt(pow(b,2)+pow(ls,2))<<endl;
    }
    return 0;
}