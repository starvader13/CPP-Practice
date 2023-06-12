#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> v;
        while(n>0){
            int temp=n%10;
            n=n/10;
            v.push_back(temp);
        }
        
    }
}