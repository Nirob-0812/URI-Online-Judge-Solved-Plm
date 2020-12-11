#include<stdio.h>
int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        int i,min,max,tem,a,b,sum=0;
        scanf("%d%d",&a,&b);
        if(a<b)
        {
            min=a;
            max=b;
        }
        else
        {
            min=b;
            max=a;
        }
        for(i=min+1;i<max;i++)
        {
            if(i%2==1)
            {
                sum=sum+i;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
