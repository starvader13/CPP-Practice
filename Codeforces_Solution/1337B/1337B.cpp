#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int h, n, m;
        cin>>h>>n>>m;

        int temp;
        while(n!=0){
            if(h<=20){
                break;
            }
            temp=h;
            h=floor(h/2)+10;
            n--;

        }
        if(h>(m*10)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
    }
}