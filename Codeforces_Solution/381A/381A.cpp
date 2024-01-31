#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;

        v.push_back(temp);
    }

    int maxVal=0, sum1=0, sum2=0, itr1=0, itr2=n-1;
    for(auto i=0; i<n; i++){
        maxVal=max(v[itr1],v[itr2]);
        
        if(i%2==0){
            sum1+=maxVal;
        }
        else{
            sum2+=maxVal;
        }

        if(maxVal == v[itr1]){
            v[itr1]=0;
            itr1++;
        }
        else{
            v[itr2]=0;
            itr2--;
        }
    }

    cout<<sum1<<" "<<sum2<<endl;
}