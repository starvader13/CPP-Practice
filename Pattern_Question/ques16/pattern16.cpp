//       *
//     * *
//   * * * 
// * * * *

#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             while(j<=n-i){
//                 cout<<"  ";
//                 j++;
//             }
//             cout<<"* ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
    
// }

//Better compexity

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
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
    
}