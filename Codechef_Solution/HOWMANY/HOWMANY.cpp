#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin>>n;

    if(n<=9){
        cout<<1<<endl;
    }
    else if(n>9 && n<=99){
        cout<<2<<endl;
    }
    else if(n>99 && n<=999){
        cout<<3<<endl;
    }
    else    cout<<"More than 3 digits"<<endl;
	return 0;
}
