#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int w1,w2,x1,x2,m;
        cin>>w1>>w2>>x1>>x2>>m;

        int inc = w2-w1;
        int range1=x1*m;
        int range2=x2*m;

        if(inc>=range1 && inc<=range2){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
	}
	return 0;
}
