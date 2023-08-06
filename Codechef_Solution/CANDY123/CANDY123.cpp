#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    
	    int sum1=0,sum2=0;
	    bool check=true;
	    
	    int i=1;
	    while(check==true){
	       if(i%2==1){
	           sum1=sum1+i;
	           if(sum1>a){
	               cout<<"Bob"<<endl;
	               break;
	           }
	       }
	       else{
	           sum2=sum2+i;
	           if(sum2>b){
	               cout<<"Limak"<<endl;
	               break;
	           }
	       }
	       i++;
	    }
	}
	return 0;
}
