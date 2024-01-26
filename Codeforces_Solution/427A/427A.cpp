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

    int countNegative=0, countPositive=0, ans=0;

    for(auto it:v){
        if(it>=1){
            countPositive+=it;
        }   
        else{
            countNegative++;
        }     
        if(countNegative>0 && countPositive==0){
            ans++;
            countNegative=0;
        }
        if(countNegative<=countPositive && countNegative>0 ){
            countNegative--;
            countPositive--;
        }
    }
    cout<<ans<<endl;
}