#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> v;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;

            v.push_back(temp);
        }

        sort(v.begin(), v.end());
        int min=1e+9;

        for (int i = 0; i < v.size()-1; i++)
        {
            if(abs(v[i]-v[i+1])<min){
                min=abs(v[i]-v[i+1]);
            }
        }
        
        cout<<min<<endl;
    }
}