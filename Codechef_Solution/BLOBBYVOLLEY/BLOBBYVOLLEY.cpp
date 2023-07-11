#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        char c='A';
        int count_a=0,count_b=0;

        for (int i = 0; i < n; i++)
        {
            if(s[i]==c){
                if(s[i]=='A'){
                    count_a++;
                }
                else    count_b++;
            }
            else    c=s[i];
        }

        cout<<count_a<<" "<<count_b<<endl;        
    }
}