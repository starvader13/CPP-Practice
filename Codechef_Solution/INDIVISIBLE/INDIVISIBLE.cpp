#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        for (int k = 2; k < 101; k++)
        {
            if(a%k!=0 && b%k!=0 && c%k!=0){
                cout<<k<<endl;
                break;
            }
        }
    }
    return 0;
}