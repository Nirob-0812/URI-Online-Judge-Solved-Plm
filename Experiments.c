#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,n,rabbit=0,rat=0,frog=0,sum1;
    double sum,par_rabbit,par_rat,par_frog;
    char c[]="C",r[]="R",s[]="S",x[2];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%s",&n,&x);
        if(strcmp(x,c)==0)
        {
            rabbit=rabbit+n;
        }
        else if(strcmp(x,r)==0)
        {
            rat=rat+n;
        }
        else if(strcmp(x,s)==0)
        {
            frog=frog+n;
        }
    }
    sum1=rabbit+rat+frog;
    sum=sum1;
    par_rabbit=(rabbit/sum)*100;
    par_rat=(rat/sum)*100;
    par_frog=(frog/sum)*100;
    printf("Total: %d cobaias\n",sum1);
    printf("Total de coelhos: %d\n",rabbit);
    printf("Total de ratos: %d\n",rat);
    printf("Total de sapos: %d\n",frog);
    printf("Percentual de coelhos: %0.2lf %%\n",par_rabbit);
    printf("Percentual de ratos: %0.2lf %%\n",par_rat);
    printf("Percentual de sapos: %0.2lf %%\n",par_frog);

   return 0;
}
