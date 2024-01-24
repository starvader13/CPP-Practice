#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, sum=0;
    cin>>n;

    for(int i=0; i<n; i++){
        string temp;
        cin>>temp;

        if(temp=="Icosahedron"){
            sum+=20;
        }
        else if(temp=="Dodecahedron"){
            sum+=12;
        }
        else if(temp=="Octahedron"){
            sum+=8;
        }
        else if(temp=="Cube"){
            sum+=6;
        }
        else{
            sum+=4;
        }
    }

    cout<<sum<<endl;
}