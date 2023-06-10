#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x;
        cin>>x;

        int roundoff = (x%10>=5)?(x+(10-(x%10))):(x-(x%10));

        cout<<100-roundoff<<endl;
    }
    return 0;
}

// ONE MORE POSSIBLE APPORACH

/*

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x;
        cin>>x;

        cout<<100-(((x+5)/10)*10)<<endl;
    }
    return 0;
}

*/