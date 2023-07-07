#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int temp = (n/2)+(n/3)+(n/4);
    if(temp<n){
        cout<<n<<endl;
    }
    else    cout<<temp<<endl;
	return 0;
}
