#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    int countCapital=65;

    set<char> stringSet;
    for(int i=0;i<s.length(); i++){
        if(s[i]>=97){
            s[i]=char(int(s[i])-32);
        }
        stringSet.insert(s[i]);
    }

    bool check = true;

    for(auto it:stringSet){
        if(int(it)!=countCapital){
            check=false;
        }
        countCapital++;
    }

    if(check==true && countCapital>90){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}