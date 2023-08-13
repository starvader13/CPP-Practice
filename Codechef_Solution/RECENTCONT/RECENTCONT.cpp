#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<string> v;

        for (int i = 0; i < n; i++)
        {
            string temp;
            cin>>temp;

            v.push_back(temp);
        }

        int count_start=0,count_ltime=0;

        for(auto it:v){
            if(it=="START38"){
                count_start++;
            }
            else    count_ltime++;
        }
        
        cout<<count_start<<" "<<count_ltime<<endl;
    }
}