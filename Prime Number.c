#include<stdio.h>
int main()
{
    int t,d=0,x,i;
    scanf("%d",&t);
    while(t--)
    {
        int x,c=0,d=0;
        scanf("%d",&x);
        if(x>1)
        {
        for(i=2;i<x;i++)
        {
            if(x%i==0)
                c++;
        }
        if(d==c)
            printf("%d eh primo\n",x);
        else
            printf("%d nao eh primo\n",x);
        }
    }
}
