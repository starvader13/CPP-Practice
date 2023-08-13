#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
        cin>>n;

        vector<int> v;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;

            v.push_back(temp);
        }

        int min=1;
        int count = 0,index_min=0,index_max=1;

        for(int i=0;i<n;i++){
            if(min != v[i]){
                count++;
            }
            else {
                index_min=i;
                break;
            }
        }

        int max=n;
        for(int i=n-1;i>=0;i--){
            if(max != v[i]){
                count++;
            }
            else {
                index_max=i;
                break;
            }
        }

        cout<<count-(index_min>index_max)<<endl;
	}
	return 0;
}
