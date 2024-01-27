#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    int ans = (4*60)-m, temp=0;
    for(int i=1; i<=n; i++){
        temp=temp+(5*i);
        if(ans<temp){
            cout<<i-1<<endl;
            return 0;
        }
    }
    cout<<n<<endl;
    return 0;
}