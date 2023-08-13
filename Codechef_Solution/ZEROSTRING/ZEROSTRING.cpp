#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
        cin>>n;

        string s;
        cin>>s;

        int fr[2]={0};

        int temp=0;

        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                temp=0;
            }
            else{
                temp=1;
            }
            fr[temp]++;
        }

        if(fr[0]==0){
            cout<<1<<endl;
        }
        else{
            if(fr[1]>fr[0]){
                cout<<fr[0]+1<<endl;
            }
            else{
                cout<<fr[1]<<endl;
            }
        }

	}
	return 0;
}
