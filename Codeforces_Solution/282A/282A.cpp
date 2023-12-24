#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int ans=0;

    while(t--){
        string s;
        cin>>s;

        if(s[1]=='+'){
            ans++;
        }
        else{
            ans--;
        }
    }
    cout<<ans<<endl;
}