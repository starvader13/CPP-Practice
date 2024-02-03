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

    vector<int> v1,v2,v3;
    for(int i=0; i<n; i++){
        if(v[i]==1){
            v1.push_back(i+1);
        }
        else if(v[i]==2){
            v2.push_back(i+1);
        }
        else{
            v3.push_back(i+1);
        }
    }

    int min_size = min(v1.size(), v2.size());
    min_size = min(min_size, int(v3.size()));

    cout<<min_size<<endl;
    for(int i=0;i<min_size; i++){
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
    }

}