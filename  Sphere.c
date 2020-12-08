#include<stdio.h>
int main()
{
    float R;
    double total;
    scanf("%f",&R);
    total= (4.0/3)*3.14159*R*R*R;
    printf("VOLUME = %0.3lf\n",total);

    return 0 ;
}
