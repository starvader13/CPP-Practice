#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        for(int i=0;i<s.length();i+=2){
            cout<<s[i];
            if(i+1==s.length()-1){
                cout<<s[i+1];
                break;
            }
        }

        cout<<endl;
    }
    return 0;
}