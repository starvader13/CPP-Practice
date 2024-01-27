#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> v;
        int cnt=0;

        while(n>0){
            v.push_back(n%10);
            if(n%10>0){
                cnt++;
            }
            n=n/10;
        }

        cout<<cnt<<endl;
        for(int i=0; i<v.size(); i++){
            if(v[i]>0){
                cout<<v[i]*pow(10, i)<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}