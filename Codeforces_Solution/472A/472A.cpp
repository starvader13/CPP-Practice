#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    bool check=true;
    int num1=4, num2=n-4;
    
    while(check){
        if(num2%2==0 || num2%3==0 || num2%5==0){
            check=false;
        }
        else{
            num1+=2;
            num2-=2;
        }
    }

    cout<<num1<<" "<<num2<<endl;
}

/*
// Better Approach:
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    bool check=true;
    int num1=4, num2=n-4;
    
    if(n%2==0){
        cout<<8<<" "<<n-8<<endl;
    }
    else{
        cout<<9<<" "<<n-9<<endl;
    }

    return 0;
}
*/