#include<bits/stdc++.h>
using namespace std;
//#include<stdio.h>
//#include<string.h>
int main()
{
  int m,n,i;
  //char s[100];
  scanf("%d%d",&m,&n);
  while(n--)
  {
    string s;
    //scanf("%s",s);
    cin>>s;
    if(s[0]=='f')
    {m++;}
    else
    {m--;}
  }
  //cout<<m<<endl;
  printf("%d\n",m);
  return 0;
}
