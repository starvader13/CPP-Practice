#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;

        bool check=false;
        if(s.length()%2==1){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            for(int i=0;i<(s.length())/2;i++){
                if(s[i]==s[i+((s.length()/2))]){
                    check=true;
                }
                else{
                    check=false;
                    break;
                }
            }
        }

        if(check==false){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}