#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s1,s2;
        cin>>s1>>s2;

        vector<string> s;

        for (int i = 0; i < 5; i++)
        {
            if(s1[i]==s2[i]){
                s.push_back("G");
            }
            else    s.push_back("B");
        }

        for(auto it:s){
            cout<<it<<"";
        }

        cout<<endl;
    }
    return 0;
}