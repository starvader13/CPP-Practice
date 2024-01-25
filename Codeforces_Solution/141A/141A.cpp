#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2, s3;
    cin>>s1>>s2>>s3;
    vector<char> s;

    if((s1.length()+s2.length())==s3.length()){
        for(int i=0; i<s1.length(); i++){
            for(int j=0; j<s3.length(); j++){
                if(s1[i]==s3[j]){
                    s.push_back(s3[j]);
                    s3[j]='\0';
                    break;
                }
            }
        }
        for(int i=0; i<s2.length(); i++){
            for(int j=0; j<s3.length(); j++){
                if(s2[i]==s3[j]){
                    s.push_back(s3[j]);
                    s3[j]='\0';
                    break;
                }
            }
        }
    }
    else{
        cout<<"NO"<<endl;;
        return 0 ;
    }

    if(s.size()==s3.length()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}

// https://codeforces.com/problemset/submission/141/69987838 (Better Approach)