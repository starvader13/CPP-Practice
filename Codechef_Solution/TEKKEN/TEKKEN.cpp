#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int a1,b1,c1;
        cin>>a1>>b1>>c1;

        int a,b,c;

        if(a1>b1 && a1>c1){
            a=b1;
            b=c1;
            c=a1;
        }
        else if(b1>a1 && b1>c1){
            a=a1;
            b=c1;
            c=b1;
        }
        else{
            a=a1;
            b=b1;
            c=c1;
        }

        int temp = min(a,b);
        a=a-temp;
        b=b-temp;

        temp=min(b,c);
        b=b-temp;
        c=c-temp;

        temp=min(a,c);
        a=a-temp;
        c=c-temp;

        if(a>0){
            cout<<"Yes"<<endl;
        }
        else cout<<"NO"<<endl;
	}
	return 0;
}
