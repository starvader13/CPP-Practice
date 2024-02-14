#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> v;

        if(n>28){
            while(n>26){
                v.push_back(26);
                n-=26;

            }

            if(v.size()==2){
                v.push_back(n);
            }
            else{
                v.push_back(1);
                v.push_back(n-1);
            }
        }
        else{
            v.push_back(1);
            v.push_back(1);
            v.push_back(n-2);
        }

        sort(v.begin(), v.end());

        for(auto it: v){
            cout<<char(it+96);
        }
        cout<<endl;
    }
}