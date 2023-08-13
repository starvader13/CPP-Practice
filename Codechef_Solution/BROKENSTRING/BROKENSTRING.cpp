#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        int n;
        cin>>n>>s;

        bool flag = true;

        for(int i=0;i<n/2;i++){
            if(s[i]==s[n/2+i]){
                flag=true;
            }
            else{
                flag=false;
                break;
            }
        }
        
        if(flag==true){
            cout<<"Yes"<<endl;
        }
        else    cout<<"No"<<endl;

    }
    return 0;
}