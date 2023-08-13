// 1 2 3 4
//   2 3 4
//     3 4
//       4

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i-1){
            cout<<"  ";
            j++;
        }
        j=1;
        int start=i;
        
        while(j<=n-i+1){
            cout<<start<<" ";
            start++;
            j++;
        }

        cout<<endl;
        i++;
    }
}