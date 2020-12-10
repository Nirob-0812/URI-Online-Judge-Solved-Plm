#include<stdio.h>
int main()
{
   double a,b,c,tem;
   scanf("%lf%lf%lf",&a,&b,&c);

   if(a<b)//6 6 10
    {
        tem=a;
        a=b;
        b=tem;
    }
    if(b<c) // 6 10 6
    {
        tem=b;
        b=c;
        c=tem;
    }
    if(a<b)
    {
        tem=a;
        a=b;
        b=tem;
    }


        if(a>=b+c)
            printf("NAO FORMA TRIANGULO\n");
        else{
        if((a*a)==(b*b+c*c))
            printf("TRIANGULO RETANGULO\n");
        if((a*a)>((b*b)+(c*c)))
            printf("TRIANGULO OBTUSANGULO\n");
        if((a*a)<(b*b)+(c*c))
            printf("TRIANGULO ACUTANGULO\n");
        if(a==b && b==c)
            printf("TRIANGULO EQUILATERO\n");
          else if(a==b || b==c|| c==a)
            printf("TRIANGULO ISOSCELES\n");}
       return 0;
}
