#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int d;
        cin>>d;

        string n;
        cin>>n;

        bool temp=false;

        for (int i = 0; i < d; i++)
        {
            int res = n[i] - '0';
            if(res%5==0){
                temp=true;
            }
        }
        
        if(temp==true){
            cout<<"yes"<<endl;
        }
        else    cout<<"no"<<endl;
	}
	return 0;
}