#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
        cin>>n;

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;

            v.push_back(temp);
        }

        sort(v.begin(),v.end(),greater<int>());

        cout<<v[0]+v[1]<<endl;
	}
	return 0;
}
