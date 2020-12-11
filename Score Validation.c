#include<stdio.h>
int main()
{
     double c=0,sum=0;
    while(1)
    {
        double score,avarage;
        scanf("%lf",&score);
        if(score<1 || score>10)
            printf("nota invalida\n");
        else if(score>=1 && score<=10)
        {
            sum=sum+score;
            c++;
        }
            if(c==2)
            {
                avarage=sum/2;
                printf("media = %0.2lf\n",avarage);
                break;
            }

    }
    return 0;
}
