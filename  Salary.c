#include<stdio.h>
int main()
{
    int NUMBER,H;
    float rate;
    double SALARY;
    scanf("%d %d %f",&NUMBER,&H,&rate);
    SALARY=H*rate;
    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %0.2lf\n",SALARY);
    return 0;
}
