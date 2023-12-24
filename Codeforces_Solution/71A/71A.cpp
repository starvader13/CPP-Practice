#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        vector<string> c;

        if(s.size()>10){
            string temp = s[0] + to_string(s.size()-2) + s[s.size()-1];
            cout<<temp<<endl;
        }
        else{
            cout<<s<<endl;
        }        
    }
}