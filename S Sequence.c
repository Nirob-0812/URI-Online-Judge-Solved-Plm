#include<stdio.h>
int main()
{
    double s,sum=1,i,c;
    for(i=2;i<=100;i++)
    {
        c=1/i;
        sum=sum+c;

    }
    printf("%0.2lf\n",sum);

    return 0;
}
