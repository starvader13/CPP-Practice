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

        int sum=0;
        for(auto it:v){
            sum+=it;
        }

        if(abs(sum)%2!=0){
            cout<<-1<<endl;
        }
        else    cout<<abs(sum)/2<<endl;
    }
    return 0;
}