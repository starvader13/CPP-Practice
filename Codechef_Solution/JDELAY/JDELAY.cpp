#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int count=0;

        for (int i = 0; i < n; i++){
            int temp_s,temp_j;
            cin>>temp_s>>temp_j;

            if(temp_j-temp_s>5){
                count++;
            }
        }

        cout<<count<<endl;
        
    }
}