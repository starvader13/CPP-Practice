#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        char s;
        cin>>s;

        string codeforces="codeforces";
        bool check=false;
        
        for(int i=0;i<codeforces.size();i++){
            if(s==codeforces[i]){
                check=true;
            }
        }

        if(check==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}