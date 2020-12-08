#include<stdio.h>
int main()
{
    int h,km;
     float fuel;
    scanf("%d %d",&h,&km);
    fuel=((h*km)/12.0);
    printf("%.3f\n",fuel);
    return 0;
}
