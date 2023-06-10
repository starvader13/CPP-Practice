#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int g,b;
        cin>>g>>b;

        cout<<b-min(g,b)<<endl;
    }
    return 0;
}