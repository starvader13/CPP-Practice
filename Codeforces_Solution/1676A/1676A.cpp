#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int first = int(s[0])-48 + int(s[1])-48 + int(s[2])-48;
        int second = int(s[3])-48 + int(s[4])-48 + int(s[5])-48;
        
        if(first==second){
            cout<<"YES"<<endl;
        }
        else    cout<<"NO"<<endl;
    }
}