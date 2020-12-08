#include<stdio.h>
int main()
{
    char Name[50];
    scanf("%s",Name);
    double x,y,TOTAL;
    scanf("%lf %lf",&x,&y);
    TOTAL = x+(y*0.15);
    printf("TOTAL = R$ %0.2lf\n",TOTAL);
    return 0;
}
