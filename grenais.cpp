#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c,x=0,y=0,z=0,j=0;
  while(1)
  {
    scanf("%d%d",&a,&b);
    printf("Novo grenal (1-sim 2-nao)\n");
    j++;
    if(a>b) x++;
    if(a<b) y++;
    if(a==b) z++;
    scanf("%d",&c);
    if(c==1) continue;
    if(c==2) break;
  }
  printf("%d grenais\n", j);
  printf("Inter:%d\n", x);
  printf("Gremio:%d\n", y);
  printf("Empates:%d\n", z);
  if(x > y)printf("Inter venceu mais\n");
  else if(y > x)printf("Gremio venceu mais\n");
  else printf("Não houve vencedor\n");
  return 0;
}
