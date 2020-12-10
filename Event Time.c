#include<stdio.h>
int main()
{
    char d1[5],d2[5],x1[2],y1[2],x2[2],y2[2];
    int day1,day2,d,h,m,s,h1,m1,s1,h2,m2,s2,sum,sum1,sum2,tem1,tem2,tem,p1,p2,q1,q2;
    scanf("%s%d",&d1,&day1);
    scanf("%d%s%d%s%d",&h1,&x1,&m1,&y1,&s1);
    scanf("%s%d",&d2,&day2);
    scanf("%d%s%d%s%d",&h2,&x2,&m2,&y2,&s2);
    sum1=((day1*86400)+(h1*3600)+(m1*60)+s1);
    sum2=((day2*86400)+(h2*3600)+(m2*60)+s2);
    sum=sum2-sum1;
    tem=sum;
    d=sum/86400;
    printf("%d dia(s)\n",d);
    tem1=sum%86400;
    h=tem1/3600;
    printf("%d hora(s)\n",h);
    tem2=tem1%3600;
    m=tem2/60;
    printf("%d minuto(s)\n",m);
    s=tem2%60;
    printf("%d segundo(s)\n",s);
    return 0;
}
