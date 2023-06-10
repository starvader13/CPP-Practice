#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,y;
        cin>>x>>y;

        (x*5>=y)?cout<<"yes":cout<<"no";
        cout<<endl;
    }
    return 0;
}