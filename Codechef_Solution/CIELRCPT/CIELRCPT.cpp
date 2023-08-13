#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int p;
        cin>>p;

        int arr[12]={0};

        while(p>=1){
            if(p>=2048){
                arr[0]++;
                p=p-2048;
            }
            else if(p>=1024){
                arr[1]++;
                p=p-1024;
            }
            else if(p>=512){
                arr[2]++;
                p=p-512;
            }
            else if(p>=256){
                arr[3]++;
                p=p-256;
            }
            else if(p>=128){
                arr[4]++;
                p=p-128;
            }
            else if(p>=64){
                arr[5]++;
                p=p-64;
            }
            else if(p>=32){
                arr[6]++;
                p=p-32;
            }
            else if(p>=16){
                arr[7]++;
                p=p-16;
            }
            else if(p>=8){
                arr[8]++;
                p=p-8;
            }
            else if(p>=4){
                arr[9]++;
                p=p-4;
            }
            else if(p>=2){
                arr[10]++;
                p=p-2;
            }
            else if(p>=1){
                arr[11]++;
                p=p-1;
            }        
        }

        int sum=0;

        for (int i = 0; i < 12; i++)
        {
            sum+=arr[i];
        }

        cout<<sum<<endl;
        
	}
	return 0;
}
