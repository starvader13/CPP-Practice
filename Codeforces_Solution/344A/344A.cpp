#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<string> s;
    for(int i=0; i<n; i++){
        string temp;
        cin>>temp;

        s.push_back(temp);
    }

    int count=0, max=1;
    for(int i=0; i<n-1; i++){
        if(s[i]!=s[i+1]){
            count=0;
        }
        else{
            count=1;
        }
        if(count==0){
            max++;
        }
    }

    cout<<max<<endl;
}