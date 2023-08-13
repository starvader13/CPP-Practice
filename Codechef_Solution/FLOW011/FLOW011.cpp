#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        double salary;
        cin>>salary;

        if(salary<1500){
            cout<<std::setprecision(8)<<(salary*2)<<endl;
        }
        else{
            cout<<std::setprecision(8)<<(salary*1.0+500.0+((salary*98.0)/100.0))<<endl;
        }
    }
    return 0;
}