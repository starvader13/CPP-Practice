#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    for(int i=0;i<4;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }

    int count=0;
    sort(v.begin(), v.end());
    for(int i=0; i<3; i++){
        if(v[i]==v[i+1]){
            count++;
        }
    }

    cout<<count<<endl;
}