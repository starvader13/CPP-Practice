#include<bits/stdc++.h>
using namespace std;

int main(){
    int p;
    cin>>p;

    int nx;
    cin>>nx;
    set<int> x;

    for(int i=0;i<nx;i++){
        int temp;
        cin>>temp;
        x.insert(temp);
    }

    int ny;
    cin>>ny;

    for(int i=0;i<ny;i++){
        int temp;
        cin>>temp;
        x.insert(temp);
    }
    
    int sum = (p*(p+1))/2;

    int sum_set=0;
    for(auto it:x){
        sum_set+=it;
    }

    if(sum-sum_set==0){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }
}