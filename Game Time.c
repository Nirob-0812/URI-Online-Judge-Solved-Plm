#include<stdio.h>
int main()
{
    int start,end,sub,sum;
    scanf("%d%d",&start,&end);
    sub=24-start;
    sum=end+sub;
    if(sum>24)
    {
        sum=sum-24;
    }
    printf("O JOGO DUROU %d HORA(S)\n",sum);
}
