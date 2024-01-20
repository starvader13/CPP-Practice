#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;

        v.push_back(temp);
    }

    int max=INT_MIN, max_index=0; 
    int min=INT_MAX, min_index=0; 
    for(int i=0;i<n;i++){
        if(v[i]>max){
           max=v[i];
           max_index = i; 
        }
        if(v[i]<=min){
            min=v[i];
            min_index = i;
        }
    }

    int ans=0;
    if(max_index>min_index){
        ans=1;
    }
    cout<<(abs(max_index-0) + abs(n-min_index))-1-ans<<endl;
}