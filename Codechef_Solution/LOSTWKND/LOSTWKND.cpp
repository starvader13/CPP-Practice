#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int a1,a2,a3,a4,a5,p;
	    cin>>a1>>a2>>a3>>a4>>a5>>p;
	    
	    int temp=a1+a2+a3+a4+a5;
	    if((temp*p)>24*5){
	        cout<<"Yes"<<endl;
	    }
	    else    cout<<"No"<<endl;
	}
	return 0;
}
