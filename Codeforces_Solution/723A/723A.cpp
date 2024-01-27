#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int secondMin;
    if(a>=b && a<=c || a>=c && a<=b){
        secondMin = a;
    }
    else if(b>=a && b<=c || b>=c && b<=a){
        secondMin = b;
    }
    else{
        secondMin = c;
    }

    cout<<abs(a-secondMin)+abs(b-secondMin)+abs(c-secondMin)<<endl;
    return 0;
}
