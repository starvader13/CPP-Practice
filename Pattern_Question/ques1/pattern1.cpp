// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

// row -> n 
// col -> n
// col ranges from 1 to n

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}