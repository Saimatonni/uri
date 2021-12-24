#include<bits/stdc++.h>
using namespace std;
int main()
{
  int k,i,sum=0;
  char x[1000];
  for(i=1;i<=3;i++)
  {
    sum=0;
    while(1)
    {
      scanf("%s",&x);
      if(x[0]=='c') break;
      if(x[0]=='-'){
        if(x[1]=='-'){
          if(x[2]=='-') sum+=0;
          else sum+=1;
        }
        else{
          if(x[2]=='-') sum+=2;
          else sum+=3;
        }
      }
        else if(x[0]=='*'){
          if(x[1]=='-'){
            if(x[2]=='-') sum+=4;
            else sum+=5;
          }
          else{
            if(x[2]=='-') sum+=6;
            else sum+=7;
          }
          }
        }
        printf("%d\n",sum);
        }
        return 0;

}
