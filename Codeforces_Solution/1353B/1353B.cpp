#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> v1,v2;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;

            v1.push_back(temp);
        }
        
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;

            v2.push_back(temp);
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end(), greater<int>());

        int sum=0;
        for(int i=0;i<k;i++){
            if(v1[i]<v2[i]){
                v1[i]=v2[i];
            }
        }
        for (int i = 0; i < v1.size(); i++){
            sum+=v1[i];
        }
        
        cout<<sum<<endl;
    }
}