#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int r1,w1,c1,r2,w2,c2;
        cin>>r1>>w1>>c1>>r2>>w2>>c2;

        int count=0;

        if(r1>r2){
            count++;
        }
        if(w1>w2){
            count++;
        }
        if(c1>c2){
            count++;
        }

        if(count>(3-count)){
            cout<<"A"<<endl;
        }
        else    cout<<"B"<<endl;
	}
	return 0;
}
