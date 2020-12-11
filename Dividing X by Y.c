#include<stdio.h>
int main()
{
    int t;
    double x,y,div;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf%lf",&x,&y);
        if(y==0)
            printf("divisao impossivel\n");
        else
        {
            div=x/y;
            printf("%0.1lf\n",div);
        }

    }
    return 0;
}
