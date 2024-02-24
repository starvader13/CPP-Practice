#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> v;
        int sum=0, count1=0, count2=0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;

            v.push_back(temp);
            if(temp==1){
                count1++;
            }
            else{
                count2++;
            }
            sum+=temp;
        }

        if(sum%2==0){
            if((count1%2==0 && count1!=0) || (count2%2==0 && count2!=0)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}