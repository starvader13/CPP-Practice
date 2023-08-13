#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        
        // total time - time left;
        // total time = 2players *(3 minutes + totalmoves)

        int temp = 2*(180+n);
        temp=temp-a-b;

        cout<<temp<<endl;
    }
    return 0;
}
