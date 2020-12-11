#include<stdio.h>
int main()
{
    int i,j,j1=7,j2=6,j3=5;
    for(i=1;i<=9;i=i+2)
    {
        for(j=1;j<4;j++)
        {
            if(j==1)
            {
                printf("I=%d J=%d\n",i,j1);

            }
            if(j==2)
            {
                printf("I=%d J=%d\n",i,j2);

            }
            if(j==3)
            {
                printf("I=%d J=%d\n",i,j3);

            }
        }
    }
    return 0;
}
