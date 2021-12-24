#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,j,n;
  while(scanf("%d",&n)!=EOF)
  {
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        if((i==j&&i+j==n-1)||i+j==n-1)
        printf("2");
        else if(i==j)
        printf("1");
        else
        printf("3");
      }

    printf("\n");
    }
  }
  return 0;
}
