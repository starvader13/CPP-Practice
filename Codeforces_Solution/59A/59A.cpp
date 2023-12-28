#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int countUpperCase = 0, countLowercase = 0;

    for(int i=0;i<s.size();i++){
        if(int(s[i])>90){
            countLowercase++;
        }
        else{
            countUpperCase++;
        }
    }
    
    if(countLowercase>=countUpperCase){
        for(int i=0;i<s.size();i++){
            if(int(s[i])<=90){
                s[i] = char(int(s[i])+32);
            }
        }
    }
    else{
        for(int i=0;i<s.size();i++){
            if(int(s[i])>90){
                s[i] = char(int(s[i])-32);
            }
        }
    }

    cout<<s<<endl;
}