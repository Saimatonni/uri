#include<bits/stdc++.h>
using namespace std;
int main()
{
  int h,m,a,t;
  cin>>t;
  while(t--)
  {
  cin>>h>>m>>a;
  if(h<10) cout<<"0"<<h<<":"<<endl;
  else cout<<h<<":"<<endl;
  if(m<10) cout<<"0"<<m<<endl;
  else cout<<m<<endl;
  if(a==0) cout<<" - A porta feshou!"<<endl;
  else cout<<" - A porta abriu!"<<endl;
}
return 0;
}
