#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int count=1;
        while(n--){
            if(count%3==0 || count%10==3){ 
                n++;
            }
            count++;
        }

        cout<<count-1<<endl;
    }
}