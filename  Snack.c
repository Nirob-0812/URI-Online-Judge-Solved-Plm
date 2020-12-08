#include<stdio.h>//1=4,2=4.50,3=5,4=2,5=1.50
int main()
{
    int c,u;
    scanf("%d %d",&c,&u);
    double x;
    if (c==1){
    x=4.00;}
    if
    (c==2){
    x=4.50;}
    if (c==3){
    x=5.00;}
  if  (c==4){
    x=2.00;}
    if (c==5){
    x=1.50;}
    printf("Total: R$ %0.2lf\n",x*u);




    return 0;
}
