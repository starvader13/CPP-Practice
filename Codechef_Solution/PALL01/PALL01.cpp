#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> v;
        while(n>0){
            int temp=n%10;
            n=n/10;
            v.push_back(temp);
        }
        
        bool temp=true;
        for(int i=0;i<v.size();i++){
            if(v[i]!=v[(v.size())-i-1]){
                // cout<<v[i]<<endl;
                // cout<<v[(v.size())-i-1]<<endl;
                temp=false;
                break;
            }
        }

        if(temp==true){
            cout<<"wins"<<endl;
        }
        else    cout<<"loses"<<endl;
        
    }
}