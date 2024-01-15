#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    vector<int> v;

    for(int i=0;i<m;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    int max = INT_MAX;
    for(int i=0; i<=m-n; i++){
        if(v[i+n-1]-v[i]<max && v[i+n-1]-v[i]>=0){
            max=v[i+n-1]-v[i];
        }
    }

    cout<<max<<endl;
}