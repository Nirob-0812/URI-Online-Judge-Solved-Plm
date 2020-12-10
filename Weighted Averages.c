#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        double a,b,c,sum;
      scanf("%lf%lf%lf",&a,&b,&c);
       sum=(a*2+b*3+c*5)/10;
       printf("%0.1lf\n",sum);
    }
    return 0;
}
