#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n<0){
        n=abs(n);
        if(n%10>(n/10)%10){
            n=n/10;
        }
        else{
            n = (((n/10)/10)*10)+(n%10);
        }
        n=0-n;
    }
    cout<<n<<endl;
    return 0;
}