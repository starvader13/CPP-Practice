#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;

  int d1=(n/1000), d2=(n/100)%10, d3=(n/10)%10, d4=(n%10);
  if(d4!=9){
    d4++;
  }
  else{
    d4=0;
    if(d3!=9){
      d3++;
    }
    else{
      d3=0;
      if(d2!=9){
        d2++;
      }else{
        d2=0;
        if(d1!=9){
          d1++;
        }
      }
    }
  }
  while(true){
    if(d4==d3 || d4==d2 || d4==d1 || d3==d2 || d3==d1 || d2==d1){
      if(d4!=9){
        d4++;
      }
      else{
        d4=0;
        if(d3!=9){
          d3++;
        }
        else{
          d3=0;
          if(d2!=9){
            d2++;
          }else{
            d2=0;
            if(d1!=9){
              d1++;
            }
          }
        }
      }
    }

    else{
      break;
    }
  }
  cout<<d1<<d2<<d3<<d4<<endl;
  return 0;
}
