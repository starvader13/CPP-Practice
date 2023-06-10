#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x;
        cin>>x;

        vector <int> v;
        int temp;

        while(x>0){
            temp = x%10;
            v.push_back(temp);
            x = x/10;
        }

        bool flag=false;

        for (auto it:v)
        {
            if(it==7){
                flag=true;
                break;
            }
        }
        
        if(flag==true){
            cout<<"Yes"<<endl;
        }
        else    cout<<"No"<<endl;
    }

}   