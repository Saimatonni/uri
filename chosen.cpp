#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,a,d,i;
  double b,e=0.0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d %lf",&a,&b);

    if(b>e)
    {
      e=b;
      d=a;
    }

  }
  if(e<8) printf("Minimum note not reached\n");
  else printf("%d\n",d);
  return 0;
}
