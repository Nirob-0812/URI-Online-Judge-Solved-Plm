#include<stdio.h>
int main()
{
    int t,i,d;
    scanf("%d",&t);
    while(t--)
    {
        int n,sum=0,d=0;
        scanf("%d",&n);
        d=n/2;
        if(n>=1)
        {
            for(i=1;i<=d;i++)
            {
                if(n%i==0)
                {
                    sum=sum+i;
                }
            }
            if(n==sum)
                printf("%d eh perfeito\n",n);
            else
                printf("%d nao eh perfeito\n",n);
        }
    }
    return 0;
}
