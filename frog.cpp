#include<bits/stdc++.h>
using namespace std;
int main()
{
  int p,n,i,a,b=0;
  scanf("%d%d",&p,&n);
  int arr[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=1;i<n;i++)
  {
    a=arr[i]-arr[i-1];
    if(a<0) a*=-1;
    if(a>p)
    {
    break;
  }
  }
  if(a>p) printf("GAME OVER\n");
  else printf("YOU WIN\n");
  return 0;
}
