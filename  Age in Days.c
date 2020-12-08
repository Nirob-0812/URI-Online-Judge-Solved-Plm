#include<stdio.h>
int main()
{
    int m,d;
    scanf("%d",&d);
    printf("%d ano(s)\n",d/365);
    m=d%365;
    printf("%d mes(es)\n",m/30);
    d=m%30;
    printf("%d dia(s)\n",d);
    return 0;
}
