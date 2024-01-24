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

    int count=0, max=-1;

    for(int i=0; i<v.size(); i++){
        if(count>max){
            max=count;
        }
        if(v[i]<=v[i+1]){
            count++;
        }
        else{
            count=0;
        }
    }

    cout<<max+1<<endl;
}