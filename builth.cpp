#include<bits/stdc++.h>
using namespace std;
int main()
{
  float a,b,c,x,y;
  while(scanf("%f",&a))
  {
    if(a==0) break;
    scanf("%f %f",&b,&c);
    x=(((a*b)/c)*100);
    y=sqrt(x);
    printf("%d\n",(int)y);
  }
  return 0;
}
