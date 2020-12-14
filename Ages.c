#include<stdio.h>
int main()
{
    double age,c=0,sum=0,avarage;
    while(1)
    {
        scanf("%lf",&age);
        if(age>0)
        {
            sum=sum+age;
            c++;
        }
        avarage=sum/c;
        if(age<0)
        {
            printf("%0.2lf\n",avarage);
            break;
        }

    }
}
