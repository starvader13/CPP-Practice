#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int ans=0;
    bool check=false;

    for(int i=n+1;i<=m;i++){
        for(int j=2;j<=sqrt(m);j++){
            if(i%j!=0){
                check=false;
            }
            else{
                check=true;
                break;
            }
        }
        if(check==false){
            ans=i;
            break;
        }
        else{
            check=true;
        }
    }

    if(ans==m){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}