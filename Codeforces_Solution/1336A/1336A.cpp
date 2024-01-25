#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n;
        cin>>n;

        if(n%2==0){
            cout<<fixed<<setprecision(0)<<(floor(n/2)-1);
        }
        else{
            cout<<fixed<<setprecision(0)<<(n/2);
        }
        cout<<endl;
    }
    return 0;
}