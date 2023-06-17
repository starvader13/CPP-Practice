#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        int minimum = *min_element(arr,arr+n);

        int temp=0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i]>minimum){
                temp++;
            }    
        }

        cout<<temp<<endl;
        
    }
    return 0;
}