#include <bits/stdc++.h>
#include<iomanip>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n,a,b;
	    cin>>n>>a>>b;
	    
	    int arr[n];
	    
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    // probability of getting A on roll1 = Count(A)/n
	    // probability of getting B on roll2 = Count(B)/n
	    // probability of getting A on roll1 and getting B on roll2 = Count(A)/n*Count(B)/n

        float count_a=0,count_b=0;
	    
	    for(int i=0;i<n;i++){
	        if(arr[i]==a){
                count_a++;
            }
            if(arr[i]==b){
                count_b++;
            }
	    }

        cout<<std::setprecision(9)<<((count_a/(n*1.0)*(count_b/(n*1.0))))<<endl;

	}
	return 0;
}
