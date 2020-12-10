#include<stdio.h>
int main()
{
    int t,n,i,in=0,out=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(n>=10 && n<=20)
            in++;
        if(n>20 || n<10)
            out++;
    }
    printf("%d in\n",in);
    printf("%d out\n",out);

    return 0;
}
