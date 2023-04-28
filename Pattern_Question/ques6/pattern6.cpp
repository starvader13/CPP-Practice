// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7 

#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n){
//         int j=1;
//         int k=row;
//         while(j<=row){
//             cout<<k<<" ";
//             k++;
//             j++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

//Solving without using the int value

int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int j=1;
        while(j<=row){
            cout<<row+j-1<<" ";
            j++;
        }
        cout<<endl;
        row++;
    }
}