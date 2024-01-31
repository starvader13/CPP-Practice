#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>v;
        for(int i=0; i<n;i++){
            int temp;
            cin>>temp;

            v.push_back(temp);
        }

        int ans;
        for (int i = 0; i<n; i++)
        {
            if(i>=n-2){
                if(v[i]!=v[i-1] && v[i]!=v[i-2]){
                    cout<<i+1<<endl;
                    break;
                }
            }
            else{
                if(v[i]!=v[i+1] && v[i]!=v[i+2]){
                    cout<<i+1<<endl;
                    break;
                }    
            }
        } 
    }
    return 0;
}