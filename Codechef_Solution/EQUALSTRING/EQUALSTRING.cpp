#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		string a, b;
		cin >> a >> b;

		int fra[26],frb[26];
        
		for(int i=0;i<n;i++){
			fra[a[i]-97]++; 
			frb[b[i]-97]++; 
		}

		int sum=0;
		for(int i=0;i<26;i++){
			sum += abs(fra[i]-frb[i]);
		}

		cout<<sum<<endl;
        
	}
	return 0;
}
