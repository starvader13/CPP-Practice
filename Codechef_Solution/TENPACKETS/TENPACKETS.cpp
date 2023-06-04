#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,y;
        cin>>x>>y;

        int temp1 = x+y*2;
        int temp2 = x*3+y;
        int temp3 = x*5;

        int temp_min= min(temp1,temp2);
        int min_element = min(temp_min,temp3);

        cout<<min_element<<endl;
    }
    return 0;
}