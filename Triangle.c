#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a+b>c)
       {
        if(a>b){
        if(a-b<c)
        printf("Perimetro = %0.1lf\n",a+b+c);}
        else if(b>a){
            if(b-a<c)
        printf("Perimetro = %0.1lf\n",a+b+c);}
       }
    else if(b+c>a)
    {
        if(b>c){
            if(b-c<a)
            printf("Perimetro = %0.1lf\n",a+b+c);}
            else if(c>b){
            if(c-b<a)
            printf("Perimetro = %0.1lf\n",a+b+c);}
    }
    else if(c+a>b)
    {
        if(c>a){
            if(c-a<b)
            printf("Perimetro = %0.1lf\n",a+b+c);}
        else if(a>c){
            if(a-c<b)
            printf("Perimetro = %0.1lf\n",a+b+c);}
    }


    else
        printf("Area");
}
