#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        // int ans=n/3;
        // cout<<ans<<" "<<(ans+(n-(ans+(2*ans))))<<endl;

        int ans=n/3;
        if((n-(ans+(2*ans)))%10==1){
            cout<<ans+1<<" "<<ans<<endl;
        }
        else if((n-(ans+(2*ans)))%10==2){
            cout<<ans<<" "<<ans+1<<endl;
        }
        else{
            cout<<ans<<" "<<ans<<endl;
        }
    }
}