#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int arr[5],sum=0;
	    for(int i=0;i<5;i++){
	        cin>>arr[i];
	        sum=sum+arr[i];
	    }
	    
	    if(sum==0){
	        cout<<"Beginner"<<endl;
	    }
        else if(sum==1){
	        cout<<"Junior Developer"<<endl;
	    }
        else if(sum==2){
	        cout<<"Middle Developer"<<endl;
	    }
        else if(sum==3){
	        cout<<"Senior Developer"<<endl;
	    }
        else if(sum==4){
	        cout<<"Hacker"<<endl;
	    }
        else cout<<"Jeff Dean"<<endl;
	}
	return 0;
}
