#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int b1,b2,b3;
        cin>>b1>>b2>>b3;

        cout<<(((b1+b2+b3)>1)?"Not now":"Water filling time");
        cout<<endl;
    }
    return 0;
}
