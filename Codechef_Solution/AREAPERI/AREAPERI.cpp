#include <iostream>
using namespace std;

int main() {
    int l,b;
    cin>>l>>b;

    if(l*b==2*(l+b)){
        cout<<"Eq"<<endl<<l*b<<endl;
    }
    else if(l*b>2*(l+b)){
        cout<<"Area"<<endl<<l*b<<endl;
    }
    else cout<<"Peri"<<endl<<2*(l+b)<<endl;
	return 0;
}
