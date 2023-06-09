#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int p;
        cin>>p;

        int temp = ((p%100<=10)?((p%100)+(p/100)):-1);

        cout<<temp<<endl;
    }
    return 0;
}