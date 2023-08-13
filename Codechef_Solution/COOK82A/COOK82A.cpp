#include <bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
        map<string,int> m;
        int b,ma,r,e;

        for(int i=0;i<4;i++){
            string temps;
            int tempi;

            cin>>temps;
            cin>>tempi;

            m.insert(pair<string,int>(temps,tempi));
        }

        map<string,int>::iterator it;

        for (it=m.begin();it!=m.end();it++){   
            if(it->first=="Barcelona"){
                b=it->second;
            }
            else if(it->first=="Malaga"){
                ma=it->second;
            }
            else if(it->first=="RealMadrid"){
                r=it->second;
            }
            else e=it->second;
        }

        if(r<ma && b>e){
            cout<<"Barcelona"<<endl;
        }
        else    cout<<"RealMadrid"<<endl;        
	}
	return 0;
}
