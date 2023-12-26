#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    vector<char> v;
    bool check=false;

    for(int i=0;i<s.size();i++){
        for(int j=0; j<v.size();j++){
            if(s[i]==v[j]){
                check=true;
                break;
            }
            else{
                check = false;
            }
        }
        if(check==false){
            v.push_back(s[i]);
        }
    }

    if(v.size()%2){
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
    }
}