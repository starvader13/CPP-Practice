#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c;
    cin>>n>>c;

    vector<int> v;

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }

    sort(v.begin(),v.end());

    int sum=0;
    for(int i=0; i<c; i++){
        if(v[i]<=0){
            sum+=v[i];
        }
    }

    cout<<abs(sum)<<endl;
}