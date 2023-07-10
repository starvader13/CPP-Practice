#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int a,b,c;
        cin>>a>>b>>c;

        int temp=min(b,c);
        b=b-temp;
        c=c-temp;

        if(b>c){
            temp=min(a,c);
            a=a-temp;
            c=c-temp;

            temp = min(a,b);
            a=a-temp;
            b=b-temp;
        }

        else{
            temp = min(a,b);
            a=a-temp;
            b=b-temp;

            temp=min(a,c);
            a=a-temp;
            c=c-temp;
        }

        if(a>0){
            cout<<"Yes"<<endl;
        }
        else cout<<"NO"<<endl;        
	}
	return 0;
}
