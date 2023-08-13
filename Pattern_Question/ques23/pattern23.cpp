//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i){
            cout<<"  ";
            j++;
        }
        j=1;
        while(j<=i){
            cout<<j<<" ";
            j++;
        }
        // j--;
        // while(j>1){
        //     j--;
        //     cout<<j<<" ";
        // }
        j=1;
        while(j<=i-1){
            cout<<i-j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}