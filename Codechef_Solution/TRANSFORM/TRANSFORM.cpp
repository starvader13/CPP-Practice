#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x;
        cin>>x;

        map <int,string> m;
        m.insert(pair<int, string> (0,"normal"));
        m.insert(pair<int, string> (1,"huge"));
        m.insert(pair<int, string> (2,"small"));

        int temp=x%3;
        for(auto it:m){
            if(it.first==temp){
                cout<<it.second<<endl;
            }
        }
    }
    return 0;
}