#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    string s;
	    cin>>s;
	    
	    bool check_indian=false, check_notindian=false, check_notsure=false;
	    
	    for(int i=0;i<n;i++){
	        if(s[i]=='I'){
	            check_indian=true;
	            break;
	        }
	        else if(s[i]=='Y'){
	            check_notindian=true;
	            break;
	        }
	    }
	    
	    if(check_indian==true){
	        cout<<"INDIAN"<<endl;
	    }
	    else if(check_notindian==true){
	        cout<<"NOT INDIAN"<<endl;
	    }
	    else cout<<"NOT SURE"<<endl;
	}
	return 0;
}
