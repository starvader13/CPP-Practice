#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,h,x;
    cin>>n>>h>>x;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int temp=false;

    for (int i = 0; i < n; i++)
    {
        if((arr[i]+x)>=h){
            temp=true;
            break;
        }
    }

    if(temp==true){
        cout<<"Yes"<<endl;
    }
    else    cout<<"No"<<endl;
    
}