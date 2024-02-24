#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum=0, count=0;
    for (int i = 1; i <= n; i++){
        if(sum>n){
            break;
        }
        int temp = (i*(i+1))/2;
        sum+=temp;
        count++;
    }
    if(n>2){
        cout<<count-1<<endl;
    }
    else{
        cout<<1<<endl;
    }
    return 0;
}