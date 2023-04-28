// A A A 
// B B B 
// C C C

#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     char ch='A';
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<ch<<" ";
//             j++;
//         }
//         cout<<endl;
//         ch++;
//         i++;
//     }
// }

//solving without increasing in row loop

int main(){
    int n;
    cin>>n;

    int i=1;
    char ch='A';
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch1 = ch+i-1;
            cout<<ch1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}