// A
// B C 
// D E F 
// G H I J

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    char ch1='A';
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<ch1<<" ";
            ch1++;
            j++;
        }
        cout<<endl;
        i++;
    }
}