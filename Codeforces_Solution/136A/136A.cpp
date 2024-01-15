#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	vector<int> v;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		v.push_back(temp);
	}

	int newArray[v.size()] = {0};

	for(int i=0;i<n;i++){
		newArray[v[i]-1] = i+1;
	}

	for(int i=0; i<n; i++){
		cout<<newArray[i]<<" ";
	}
	return 0;
}