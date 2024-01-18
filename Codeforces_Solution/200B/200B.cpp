#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;

    float sum=0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        sum+=temp;
    }

    cout<<setprecision(10)<<sum/n<<endl;
    return 0;
}