#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int count = 0;
    for(int i=0; i<s.size()-1; i++){
        if(s[i]==s[i+1]){
            count++;
        }
        else{
            count = 0;
        }
        if(count+1>=7){
            cout<<"YES"<<endl;;
            return 0;
        }
    }

    cout<<"NO"<<endl;
    return 0;
}