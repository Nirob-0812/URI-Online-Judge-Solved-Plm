#include<stdio.h>
int main()
{
    int x,y,min,max,sum=0,i;
    scanf("%d%d",&x,&y);
    if(x<y)
    {
        min=x;
        max=y;
    }
    else
    {
        min=y;
        max=x;
    }
    for(i=min;i<=max;i++)
    {
        if(i%13!=0)
        {
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
