#include<bits/stdc++.h>
using namespace std;
int main()
{
  int  x1,y1,x2,y2,h,m;
  scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
  h=x2-x1;
  if(h<0)
  {h=24+h;}
  m=y2-y1;
  if(m<0)
  {
    m=60+m;
    h--;
  }
  if(x1==x2&&y1==y2)
  {
    printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
  }
  else
  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
  return 0;

}
