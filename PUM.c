#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n*4;i++)
    {
        if(i%4==0)
            {
            printf("PUM");
            goto nirob;
            }
        printf("%d ",i);
        nirob:
        if(i%4==0)
            printf("\n");

    }
    return 0;
}
