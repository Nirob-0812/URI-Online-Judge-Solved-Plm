#include<stdio.h>
int main()
{
    int a,b,i,min,max,sum=0,tem;
    scanf("%d%d",&a,&b);
    if(a<b)
    {
     min=a;
     max=b;
     if(min%2==0)
     {
         min=min+1;
     }
     else if(min%2!=0)
         tem=min;
    }
    else if(a>b)
    {
        max=a;
        min=b;
        if(min%2==0)
     {
         min=min+1;
     }
     else if(min%2!=0)
        tem=min;
    }
    for(i=min;i<max;i=i+2)
    {
        sum=sum+i;
    }
    sum=sum-tem;
    printf("%d\n",sum);
    return 0;
}
