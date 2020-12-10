#include<stdio.h>
int main()
{
    double n;
    int c=0,i;
    for(i=0;i<6;i++)
    {
        scanf("%lf",&n);
        if(n>0)
            c++;
    }
    printf("%d valores positivos\n",c);
    return 0;

}
