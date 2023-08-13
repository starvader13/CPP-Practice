#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    vector <int> v1;
	    vector <int> v2;
	    
	    for(int i=0;i<n;i++){
	        int temp;
	        cin>>temp;
	        v1.push_back(temp);
	    }
	    
	    for(int i=0;i<n;i++){
	        int temp;
	        cin>>temp;
	        v2.push_back(temp);
	    }
	    
	    int count1=0, count2=0, max1=0, max2=0;
	    
	    for(int i=0;i<n;i++){
	        if(v1[i]!=0){
	            count1++;
	            if(count1>max1){
	                max1=count1;
	            }
	        }
	        else count1=0;
	        
	        if(v2[i]!=0){
	            count2++;
	            if(count2>max2){
	                max2=count2;
	            }
	        }
	        else count2=0;
	    }
	    
	    if(max1>max2){
	        cout<<"Om"<<endl;
	    }
	    else if(max1<max2){
	        cout<<"Addy"<<endl;
	    }
	    else    cout<<"Draw"<<endl;
	}
	return 0;
}
