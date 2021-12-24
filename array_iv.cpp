#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,j,k=0,l=0,imp[5],p[5],n,m;
  for(i=0;i<15;i++)
  {
    scanf("%d",&n);
    if(n%2==0)
    {
    p[k]=n;
    k++;
    if(k==5)
    {
      for(j=0;j<5;j++)
      {
        printf("par[%d] = %d\n",j,p[j]);
        p[j]=0;
        k=0;
      }
    }
  }
  else
  {
    imp[l]=n;
    l++;
    if(l==5)
    {
      for(m=0;m<5;m++)
      {
        printf("impar[%d] = %d\n",m,imp[m]);
        imp[m]=0;
        l=0;
      }
    }
  }
  }
  for(m=0;m<5;m++)
  {
    if(imp[m]==0) break;
    printf("impar[%d] = %d\n",m,imp[m]);
  }
  for(j=0;j<5;j++)
  {
    if(p[j]==0) break;
    printf("par[%d] = %d\n",j,p[j]);
  }
  return 0;
}
