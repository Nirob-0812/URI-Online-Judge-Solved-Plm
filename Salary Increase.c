#include<stdio.h>
int main()
{
    double salary,erned_money,sum;
    scanf("%lf",&salary);
    if(salary>0 && salary<=400.00)
    {
        erned_money=salary*0.15;
        sum=salary+erned_money;
        printf("Novo salario: %0.2lf\n",sum);
        printf("Reajuste ganho: %0.2lf\n",erned_money);
        printf("Em percentual: 15 %%\n");
    }
    else if(salary>=400.01 && salary<=800.00)
    {
        erned_money=salary*0.12;
        sum=salary+erned_money;
        printf("Novo salario: %0.2lf\n",sum);
        printf("Reajuste ganho: %0.2lf\n",erned_money);
        printf("Em percentual: 12 %%\n");
    }
    else if(salary>=800.01 && salary<=1200.00)
    {
        erned_money=salary*0.10;
        sum=salary+erned_money;
        printf("Novo salario: %0.2lf\n",sum);
        printf("Reajuste ganho: %0.2lf\n",erned_money);
        printf("Em percentual: 10 %%\n");
    }
    else if(salary>=1200.01 && salary<=2000.00)
    {
        erned_money=salary*0.07;
        sum=salary+erned_money;
        printf("Novo salario: %0.2lf\n",sum);
        printf("Reajuste ganho: %0.2lf\n",erned_money);
        printf("Em percentual: 7 %%\n");
    }
    else if(salary>2000.00)
    {
        erned_money=salary*0.04;
        sum=salary+erned_money;
        printf("Novo salario: %0.2lf\n",sum);
        printf("Reajuste ganho: %0.2lf\n",erned_money);
        printf("Em percentual: 4 %%\n");
    }
}
