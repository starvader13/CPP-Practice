#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        vector<int> v;
        for (int i = 0; i < 10; i++)
        {
            int temp;
            cin>>temp;
            v.push_back(temp);
        }

        int i=1,sum1=0,sum2=0;

        for(auto it:v){
            if(i%2==0){
                sum1=sum1+it;
            }
            else{
                sum2=sum2+it;
            }
            i++;
        }

        if(sum1>sum2){
            cout<<2<<endl;
        }
        else if(sum1<sum2){
            cout<<1<<endl;
        }
        else cout<<0<<endl;
        
    }
}