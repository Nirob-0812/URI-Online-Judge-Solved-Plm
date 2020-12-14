#include<stdio.h>
int main()
{
    while(1)
    {
        int x,sum=0,y=5;
        scanf("%d",&x);
        if(x==0)
        {
            printf("\n");
            break;
        }
        else
        {
        if(x%2!=0)
        {
            x=x+1;
        }
        else
            x=x;
        while(y--)
        {
            sum=sum+x;
            x=x+2;
        }
        printf("%d\n",sum);
        }

    }
    return 0;
}
