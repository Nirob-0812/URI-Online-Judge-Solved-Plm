#include<stdio.h>
int main()
{
    int sum=60,i;

    for(i=1;i>=1;i=i+3)
    {
        if(i==1)
        sum=60;
        if(i>=2)
        sum=sum-5;
        if(sum<0)
        {
         break;
        }
        printf("I=%d J=%d\n",i,sum);
    }
    return 0;
}
