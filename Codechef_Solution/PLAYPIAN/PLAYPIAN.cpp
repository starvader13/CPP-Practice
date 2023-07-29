#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    string s;
	    cin>>s;

        int temp_a=0,temp_b=0;
        bool temp=true;
	    
	    for(int i=0;i<s.size();i++){
            if(s[i]=='A'){
                temp_a++;
            }
            else    temp_b++;  

            // cout<<temp_a<<temp_b<<endl; 
            if(i%2==0){
                if((s[i]=='A' && s[i+1]=='A') || (s[i]=='B' && s[i+1]=='B')){
                    temp=false;
                    continue;
                }
            }
        }

        if(temp==true){
            if(temp_a==temp_b){
                cout<<"yes"<<endl;
            }
            else    cout<<"no"<<endl;
        }
        else cout<<"no"<<endl;
    }
	return 0;
}
