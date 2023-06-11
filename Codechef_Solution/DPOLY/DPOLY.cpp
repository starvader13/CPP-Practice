#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;

            v.push_back(temp);
        }

        int temp=0;
        for (int i = 0; i < n; i++)
        {
            if(v[i]!=0){
                temp=i;
            }
        }
        cout<<temp<<endl;
    }
    return 0;
}