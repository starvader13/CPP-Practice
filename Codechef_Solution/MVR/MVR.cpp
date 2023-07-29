#include <bits/stdc++.h>
using namespace std;

int main() {
	int m1,m2,r1,r2;
    cin>>m1>>m2>>r1>>r2;
    
	if((m1*2+m2)>(r2+r1*2)){
	    cout<<"Messi"<<endl;
	}
	else if((m1*2+m2)<(r2+r1*2)){
	    cout<<"Ronaldo"<<endl;
	}
	else cout<<"Equal"<<endl;
}
