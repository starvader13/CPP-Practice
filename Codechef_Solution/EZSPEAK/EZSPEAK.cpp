#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    string s;
	    
	    cin>>n>>s;
	    int count=0;
	    
	    for(int i=0;i<n;i++){
	        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
	            count++;
	            if(count==4){
	                break;
	            }
	        }
	        else{
	            count=0;
	        }
	    }
	    if(count==4){
	        cout<<"No"<<endl;
	    }
	    else{
	        cout<<"Yes"<<endl;
	    }
	}
	return 0;
}
