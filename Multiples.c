#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<b)
        {
    if(b%a==0)
        printf("Sao Multiplos\n");
    else if(b%a!=0)
        printf("Nao sao Multiplos\n");
        }
        if(a>b)
        {
           if(a%b==0)
        printf("Sao Multiplos\n");
    else if(a%b!=0)
        printf("Nao sao Multiplos\n");
        }
    return 0;
}
