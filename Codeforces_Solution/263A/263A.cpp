#include<bits/stdc++.h>
using namespace std;

int main(){
    int ithIndex, jthIndex;
    
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            int temp;
            cin>>temp;
            if(temp==1){
                ithIndex=i;
                jthIndex=j;
            }
        }

    }
    cout<<(abs(3-ithIndex))+(abs(3-jthIndex))<<endl;
}