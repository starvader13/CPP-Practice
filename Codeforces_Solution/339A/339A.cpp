#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    vector<char> v;

    for(int i=0;i<s.size();i++){
        if(s[i]=='+'){
            continue;
        }
        v.push_back(s[i]);
    }

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        if(i==v.size()-1){
            cout<<v[i];
            break;
        }
        cout<<v[i]<<'+';
    }
    cout<<endl;

}