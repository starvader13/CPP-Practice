#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int ans;

        if(n<=9){
            ans=((n-1)*10 + 1);
        }
        else if(n<=99){
            ans=(((n-1)%10)*10 + 3);
        }
        else if(n<=999){
            ans=(((n-1)%10)*10 + 6);
        }
        else{
            ans=(((n-1)%10)*10 + 10);
        }

        cout<<ans<<endl;
    }
    return 0;
}