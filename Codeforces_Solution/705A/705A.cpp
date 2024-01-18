#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    bool check=true;
    
    while(n){
        if(n==1 && check==true){
            cout<<"I hate it";
            check=false;
        }
        else if(n==1 && check==false){
            cout<<"I love it";
            check=true;
        }
        else if(n>=2 && check==true){
            cout<<"I hate that"<<" ";
            check=false;
        }
        else{
            cout<<"I love that"<<" ";
            check=true;
        }
        n--;
    }
}