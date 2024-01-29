#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1, x2, x3, x4;
    cin>>x1>>x2>>x3>>x4;

    int maxVal = max(x1, x2);
    maxVal = max(x3, maxVal);
    maxVal = max(x4, maxVal);

    if(x1==maxVal){
        cout<<maxVal-x2<<" "<<maxVal-x3<<" "<<maxVal-x4<<endl;
    }
    else if(x2==maxVal){
        cout<<maxVal-x1<<" "<<maxVal-x3<<" "<<maxVal-x4<<endl;
    }
    else if(x3==maxVal){
        cout<<maxVal-x2<<" "<<maxVal-x1<<" "<<maxVal-x4<<endl;
    }
    else{
        cout<<maxVal-x2<<" "<<maxVal-x3<<" "<<maxVal-x1<<endl;
    }
}