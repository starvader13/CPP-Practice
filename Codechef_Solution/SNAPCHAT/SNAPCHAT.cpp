#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> a;
        vector<int> b;

        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;

            a.push_back(temp);
        }

        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;

            b.push_back(temp);
        }

        int count=0,res=0;

        for(int i=0;i<n;i++){
            if(a[i]!=0 && b[i]!=0){
                count++;
            }
            else{
                if(count>res){
                    res=count;
                }
                count=0;
            }
        }

        cout<<max(count,res)<<endl;
    }
}