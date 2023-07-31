#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int a,b;
        cin>>a>>b;

        int sum=a+b;
        int temp,count=0;

        while(sum>0){
            temp=sum%10;
            sum=sum/10;

            if(temp==0 || temp==6 || temp==9){
                count=count+6;
            }
            else if(temp==2 || temp==3 || temp==5){
                count=count+5;
            }
            else if(temp==7){
                count=count+3;
            }
            else if(temp==4){
                count=count+4;
            }
            else if(temp==8){
                count=count+7;
            }
            else count=count+2;
        }

        cout<<count<<endl;
	}
	return 0;
}
