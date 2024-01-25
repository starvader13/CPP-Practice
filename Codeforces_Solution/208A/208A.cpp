#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<char> v;

    for(int i=0; i<s.size(); i++){ 
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B' && i+2<s.size()){
            i=i+2;
            v.push_back(' ');
            continue;
        }
        v.push_back(s[i]);
    }
    
    for(int i=0; i<v.size(); i++){
        if(v[i]==' '){
            continue;
        }
        else{
            cout<<v[i];
        }
        if(v[i+1]==' '){
            cout<<' ';
        }
    }
    cout<<endl;
}