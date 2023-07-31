#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    string s;
        cin>>s;

        int temp_a=0,temp_b=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
                temp_a++;
            }
            else temp_b++;
        }
        cout<<min(temp_a,temp_b)<<endl;
	}
	return 0;
}
