#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        float x,h;
        cin>>x>>h;

        if(h<((x/2)*5)){
            cout<<ceil((h)/(x/2))<<endl;
        }
        else{
            int temp = (x/2)*5;
            h-=temp;
            cout<<ceil(h/x)+5<<endl;
        }
    }

    return 0;
}