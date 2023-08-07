#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n,b;
	    cin>>n>>b;
	    
        vector<int> v;
        for(int i=0;i<3*n;i++){
            int temp;
            cin>>temp;
            
            v.push_back(temp);
        }
        
        long long int max=0;
        bool check=false;
        
        for(int i=0;i<3*n;i+=3){
            if(v[i+2]<=b){
                check=true;
                if(v[i]*v[i+1]>max){
                    max=v[i]*v[i+1];
                }
            }
        }
	
	    if(check==true){
	        cout<<max<<endl;
	    }
	    else    cout<<"no tablet"<<endl;
	}
	
	return 0;
}
