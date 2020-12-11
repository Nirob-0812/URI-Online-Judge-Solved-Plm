#include<stdio.h>
int main()
{
    int x,y,i,min,max;
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
    for(i=min+1;i<max;i++)
    {
        if(i%5==2 || i%5==3)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
