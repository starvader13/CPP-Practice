#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int h,m;
        cin>>h>>m;

        int bmi = (h)/pow(m,2);
        if(bmi<=18){
            cout<<1<<endl;
        }
        else if(bmi>=19 && bmi<=24){
            cout<<2<<endl;
        }
        else if(bmi>=25 && bmi<=29){
            cout<<3<<endl;
        }
        else    cout<<4<<endl;
    }
}