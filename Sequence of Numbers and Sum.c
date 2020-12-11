#include<stdio.h>
int main()
{

    while(1)
    {
    int m,n,min,max,i,sum=0;
    scanf("%d%d",&m,&n);
    if(m<=0 || n<=0)
    break;
    else if(m>0 && n>0)
    {
    if(m>n)
    {
        min=n;
        max=m;
    }
    else
    {
        min=m;
        max=n;
    }
    for(i=min;i<=max;i++)
    {
        sum=sum+i;
        printf("%d ",i);
    }
    printf("Sum=%d\n",sum);
    }
    }

}
