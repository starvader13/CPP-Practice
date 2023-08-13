// 123
// 456
// 789

// row - n
// col for row - n
// col starts with 1 iterates continumously till end

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=0,k=0;
    while(i<n){
        int j=0;
        while(j<n){
            k++;
            cout<<k<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}