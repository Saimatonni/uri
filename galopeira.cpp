//#include <stdio.h>
//#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst, lnth;
    char name[10100];
    scanf("%d", &tst);
    while(tst--)
    {
        scanf("%s", name);
        lnth = strlen(name);
        printf("%.2lf\n", lnth*.01);
    }
    return 0;
}
