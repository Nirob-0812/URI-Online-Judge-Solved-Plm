#include<stdio.h>
int main()
{
    int  a,b,c=0,i=0,g=0,d=0,x;
    niron:
    while(1)
    {
        c++;
        scanf("%d%d",&a,&b);
        if(a>b)
        {
            i++;
        }
        else if(b>a)
        {
            g++;
        }
        else if(a==b)
             d++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&x);
        if(x==1)
            goto niron;
        if(x==2)
            {
        printf("%d grenais\n",c);
        printf("Inter:%d\n",i);
        printf("Gremio:%d\n",g);
        printf("Empates:%d\n",d);
        if(i>g)
            printf("Inter venceu mais\n");
        if(g>i)
            printf("Gremio venceu mais\n");
        if(g==i)
            printf("Não houve vencedor\n");
            break;

            }
    }
    return 0;

}
