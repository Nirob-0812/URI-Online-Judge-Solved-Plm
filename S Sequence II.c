#include<stdio.h>
int main()
{
    double i,a,s=2,sum=1;
    for(i=3;i<=39;i=i+2)
    {
        a=i/s;
        sum=sum+a;
        //s=s+s;
    }
    printf("%0.2lf\n",sum);

    return 0;
}
