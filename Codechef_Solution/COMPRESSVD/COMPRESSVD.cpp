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

        int count=0;

        vector<int>::iterator it;
        for(it=v.begin();it<(v.end()-1);it++){
            
            if(*it==*(it+1)){
                count++;
            }
        }
        
        cout<<n-count<<endl;
    }
}