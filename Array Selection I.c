#include<stdio.h>
int main()
{
    int i;
    double a;
        for(i=0;i<100;i++)
        {
        scanf("%lf",&a);
        if(a<=10)
        {

            printf("A[%d] = %0.1lf\n",i,a);

        }
        }

    return 0;
}
