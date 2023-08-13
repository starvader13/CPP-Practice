// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// i 2 3 * * * * 3 2 1 
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j<<" ";
            j++;
        }
        j=n-1;
        while(j>=n-i+1){
            cout<<"* ";
            j--;
        }
        j=1;
        while(j<=i-1){
            cout<<"* ";
            j++;
        }
        j=1;
        while(j<=n-i+1){
            cout<<n-j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;       
    }
}