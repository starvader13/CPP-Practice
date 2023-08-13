#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
        cin>>n;

        /*
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;

            v.push_back(temp);
        }

        sort(v.begin(),v.end(),greater<int>());

        for (int i = 0; i < n; i++)
        {
            if(v[i]!=v[i+1]){
                cout<<(v[i]+v[i+1])<<endl;
                break;
            }
        }
        */

        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            s.insert(temp);
        }

        set<int>::reverse_iterator it;

        // for (it=s.end();it!=s.begin();it--){
        //     if((*it)!=(*(it--))){
        //         cout<<((*it) + (*(it--)))<<endl;
        //         break;
        //     }
        // }

        for (it=s.rbegin();it!=s.rend();it++){
            if((*it)!=(*(it++))){
                cout<<((*it) + (*(it++)))<<endl;
                break;
            }
        }
        
	}
	return 0;
}
