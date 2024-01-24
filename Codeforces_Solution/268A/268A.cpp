#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> first;
    vector<int> second;

    for(int i=0; i<n; i++){
        int temp1, temp2;
        cin>>temp1>>temp2;

        first.push_back(temp1);
        second.push_back(temp2);
    }

    int count=0;
    for(auto itr1: first){
        for(auto itr2: second){
            if(itr1 == itr2){
                count++;
            }
        }
    }

    cout<<count<<endl;
}