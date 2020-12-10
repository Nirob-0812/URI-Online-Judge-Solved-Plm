#include<stdio.h>
int main()
{
    int i,t,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(n>0)
        {
            if(n%2==0)
            {
                printf("EVEN POSITIVE\n");
            }
            else if(n%2!=0)
            {
                printf("ODD POSITIVE\n");
            }
        }
        else if(n<0)
        {
            if(n%2==0)
            {
                printf("EVEN NEGATIVE\n");
            }
            else if(n%2!=0)
            {
                printf("ODD NEGATIVE\n");
            }
        }
        else
            printf("NULL\n");
    }
    return 0;
}
