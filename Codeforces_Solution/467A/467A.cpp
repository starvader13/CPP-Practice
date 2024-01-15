#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;


    vector<pair<int, int>> v;
    for(int i=0;i<n;i++){
        int temp1, temp2;
        cin>>temp1>>temp2;
        v.push_back(make_pair(temp1, temp2));
    }

    int count=0;

    for(auto it: v){
        if(it.second - it.first>=2){
            count++;
        }
    }

    cout<<count<<endl;
}