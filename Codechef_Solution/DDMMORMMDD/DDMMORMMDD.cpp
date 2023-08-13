#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    string s;
        cin>>s;

        int temp1=int(s[0]-'0')*10+int(s[1]-'0');
        int temp2=int(s[3]-'0')*10+int(s[4]-'0');
        

        if(temp1<=12 && temp2<=12){
            cout<<"Both"<<endl;
        }
        else if(temp1>12){
            cout<<"DD/MM/YYYY"<<endl;
        }
        else cout<<"MM/DD/YYYY"<<endl;

	}
	return 0;
}
