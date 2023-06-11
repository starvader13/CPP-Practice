#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int count=0;
        vector<int> s;
        vector<int> d;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;

            s.push_back(temp);
        }

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;

            d.push_back(temp);
        }

        for(int i=0;i<n;i++){
            if(s[i]==d[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}