#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,y,n;
        cin>>x>>y>>n;

        int index=0, ans=0;
        
        if(n%x==y){
            ans=n;
        }
        else if(n%x<y){
            ans = n-((n%x)+(x-y));
        }
        else{
            ans= n-((n%x)-y);
        }
        
        cout<<ans<<endl;
    }
}