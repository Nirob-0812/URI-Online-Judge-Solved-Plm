#include<stdio.h>
int main()
{
    int n,i,square,cuib,increment_square,increment_cuib;
    scanf("%d",&n);
    if(n>1 && n<1000)
    {
        for(i=1;i<=n;i++)
        {
            square=i*i;
            cuib=i*i*i;
            increment_square=square+1;
            increment_cuib=cuib+1;
            printf("%d %d %d\n",i,square,cuib);
            printf("%d %d %d\n",i,increment_square,increment_cuib);

        }
    }
    return 0;
}
