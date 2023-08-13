#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int fr[26]={0};
        
        for(int i=0;i<n;i++){
            fr[s[i]-'a']++;
        }

        int check=true;

        for(int i=0;i<26;i++){
            if(fr[i]%2!=0){
                check=false;
                break;
            }
        }

        if(check==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}