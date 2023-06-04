#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;

        vector <int> v;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            v.push_back(temp);
        }

        int count = 0 ;
        for (auto it:v)
        {   
            if(it>=x){
                count++;
            }
        }
        
        cout<<count<<endl;
    }
    return 0;
}