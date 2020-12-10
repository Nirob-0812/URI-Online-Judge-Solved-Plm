#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x%2==0)
        x=x+1;
    else if(x%2!=0)
        x=x;
    for(int i=x;i<x+12;i=i+2)
    {
        printf("%d\n",i);
    }
    return 0;
}
