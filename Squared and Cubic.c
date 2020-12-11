#include<stdio.h>
int main()
{
    int n,i,square,cuib;
    scanf("%d",&n);
    if(n>1 && n<1000)
    {
        for(i=1;i<=n;i++)
        {
            square=i*i;
            cuib=i*i*i;
            printf("%d %d %d\n",i,square,cuib);
        }
    }
    return 0;
}
