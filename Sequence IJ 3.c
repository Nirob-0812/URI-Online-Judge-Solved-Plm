#include<stdio.h>
int main()
{
    int j1=7,j2=6,j3=5,i,j;
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
        j1=j1+2;
        j2=j2+2;
        j3=j3+2;

    }
    return 0;

}
