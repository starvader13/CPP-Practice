#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int drink=(k*l)/nl;
    int limes=c*d;
    int salt=p/np;

    int minVal = min(drink, limes);
    minVal = min(minVal, salt);

    cout<<minVal/n<<endl;
    return 0;
}