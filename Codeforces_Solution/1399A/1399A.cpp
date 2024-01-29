#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
        vector<int> v;
        for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
            v.push_back(temp);
        }

        sort(v.begin(), v.end());
        bool check=true;

        for (int i = 0; i < v.size()-1; i++)
        {
            if(v[i+1]-v[i]>1){
                check=false;
            }
        }
        
        if(check==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}