#include<stdio.h>
int main()
{
    int x,z,i,sum=0,c=0;
    scanf("%d%d",&x,&z);
    while(z<=x)
        scanf("%d",&z);

    for(i=x;sum<z;i++)
    {
        sum=sum+i;
        c++;
    }
    printf("%d\n",c);
}
