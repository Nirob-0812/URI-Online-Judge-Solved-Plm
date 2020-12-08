#include<stdio.h>
int main()
{
     float a,b,c,x,x1,x2;
     scanf("%f %f %f",&a,&b,&c);
     x=(b*b-4*a*c);
     if (x<0)
     printf("Impossivel calcular\n");
     else if(a==0)
     printf("Impossivel calcular\n");

     else{
       x1=(-b+sqrt(x))/(2*a);
       x2=(-b-sqrt(x))/(2*a);
       printf("R1 = %0.5f\n",x1);
       printf("R2 = %0.5f\n",x2);
     }


    return 0;
}
