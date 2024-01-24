#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    vector<char> v;

    if(s.length()<=2){
        cout<<0<<endl;
        return 0;
    }
    
    for(int i=1;i<s.length()-1; i+=3){
        v.push_back(s[i]);
    }

    sort(v.begin(), v.end());
    int count = 0;

    for(int i=0; i<v.size()-1; i++){
        if(v[i]!=v[i+1]){
            count++;
        }
    }
    cout<<count+1<<endl;
}
