#include<stdio.h>
int main()
{
    double n,sum=0,avarage;
    int i,c=0;
    for(i=0;i<6;i++)
    {
        scanf("%lf",&n);
        if(n>0)
        {
            c++;
            sum=sum+n;
        }

    }
    avarage=sum/c;
    printf("%d valores positivos\n",c);
    printf("%0.1lf\n",avarage);
    return 0;

}
