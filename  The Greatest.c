#include<stdio.h>
int main()
{
    int a,b,c,greatest;
    scanf("%d %d %d",&a,&b,&c);
    greatest=a;
    if( b> greatest)
    greatest=b;
    if(c > greatest)
    greatest=c;
    printf("%d eh o maior\n",greatest);

    return 0;
}
