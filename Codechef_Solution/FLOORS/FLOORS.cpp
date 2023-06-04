#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,y;
        cin>>x>>y;

        int cheffloor = ceil(x/10.0);
        int chefinafloor = ceil(y/10.0);

        cout<<abs(chefinafloor-cheffloor)<<endl;
    }
    return 0;
}