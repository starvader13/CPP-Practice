#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    string s1,s2;
	    cin>>s1>>s2;
	    
	    int sum1=0,sum2=0;
	    for(int i=0;i<n;i++){
	        sum1=sum1+(s1[i]-'0');
	        sum2=sum2+(s2[i]-'0');
	    }
	    
	    if(sum1==sum2){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }

	}
	return 0;
}
