#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

        float d1 = sqrt((pow(x1,2)+pow(y1,2)));
        float d2 = sqrt(pow(x2,2)+pow(y2,2));

        if(d1>d2){
            cout<<"Alex"<<endl;
        }
        else if(d2>d1){
            cout<<"Bob"<<endl;
        }
        else cout<<"Equal"<<endl;
    }
    return 0;
}