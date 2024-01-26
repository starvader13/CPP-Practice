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

    int min=v[0], max=v[0], count=0;
    for(auto it:v){
        if(it>max){
            count++;
            max=it;
        }
        if(it<min){
            count++;
            min=it;
        }
    }
    cout<<count<<endl;
}