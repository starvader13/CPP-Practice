#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x;
        cin>>x;

        if(x%5==0){
            cout<<(x/10)+(x%10)/5<<endl;
        }
        else    cout<<-1<<endl;
    }
}