#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    float n,v1,v2;
	    cin>>n>>v1>>v2;
	    
	    float temp1=(n*sqrt(2))/v1;
        float temp2=(2*n)/v2;

        if(temp1<temp2){
            cout<<"Stairs"<<endl;
        }
        else cout<<"Elevator"<<endl;
	}
	return 0;
}
