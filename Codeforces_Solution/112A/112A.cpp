#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin>>s1>>s2;

    int check;

    for(int i=0; i<s1.size(); i++){
        if(int(s1[i]>90)){
            s1[i] = char(int(s1[i])-32);
        }
        if(int(s2[i]>90)){
            s2[i] = char(int(s2[i])-32);
        }
    }

    for(int i=0;i<s1.size();i++){
        if(s1[i]==s2[i]){
            check=0;
        }
        else if(s1[i]>s2[i]){
            check=1;
            break;
        }
        else{
            check=-1;
            break;
        }
    }

    cout<<check<<endl;
}