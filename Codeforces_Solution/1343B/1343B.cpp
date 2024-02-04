#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> v1,v2;
        if((n/2)%2==1){
            cout<<"NO"<<endl;
        }
        else{
            for(int i=2;i<=n;i+=2){
                v1.push_back(i);
                v2.push_back(i-1);   
            }
            v2[v2.size()-1]+=(v1.size());
            cout<<"Yes"<<endl;
            for(auto it:v1){
                cout<<it<<" ";
            }
            for(auto it:v2){
                cout<<it<<" ";
            }
            cout<<endl;
        }        
    }
    return 0;
}