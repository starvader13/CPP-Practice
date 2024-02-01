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

    int maxVal = *max_element(v.begin(), v.end());
    int sum=0;
    for(auto it:v){
        sum+=(maxVal-it);
    }

    cout<<sum<<endl;
}