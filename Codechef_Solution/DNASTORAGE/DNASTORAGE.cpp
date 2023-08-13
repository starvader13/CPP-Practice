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

        vector<char> v;

        for (int i = 0; i < n; i+=2)
        {
            if(s[i]=='0' && s[i+1]=='0'){
                v.push_back('A');
            }
            else if(s[i]=='0' && s[i+1]=='1'){
                v.push_back('T');
            }
            else if(s[i]=='1' && s[i+1]=='0'){
                v.push_back('C');
            }
            else   v.push_back('G');
        }

        for(auto it:v){
            cout<<it<<"";
        }
        cout<<endl;        
    }
    return 0;
}