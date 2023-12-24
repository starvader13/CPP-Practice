#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,count=0;
    cin>>n>>k;

    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;

        v.push_back(temp);
    }

    for(auto it: v){
        if(it>=v[k-1] && it>0){
            count++;
        }
    }

    cout<<count<<endl;
}