#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;

        v.push_back(temp);
    }

    int sum=0;
    for(auto it:v){
        sum=sum+it;
    }

    sort(v.begin(), v.end(), greater<int>());
    int greater=0, lesser=0, count=0;
    
    for(auto it:v){
        greater += it;
        lesser = sum-greater;

        count++;
        if(greater>lesser){
            break;
        }
    }

    cout<<count<<endl;
}