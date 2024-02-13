#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        vector<char> v;
        bool check=true;

        for(int i=0;i<s.size();i++){
            if(s[i]!=s[i+1]){
                v.push_back(s[i]);
            }
        }

		for(int i=0; i<v.size();i++){
			for(int j=i+1;j<v.size();j++){
                if(v[i]==v[j]){
					check=false;
					break;
				}
			}
		}

        if(check==false){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}