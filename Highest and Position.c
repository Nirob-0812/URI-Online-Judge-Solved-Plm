#include<stdio.h>
int main()
{
    int highest,i,n,position;
    for(i=1;i<=100;i++)
    {
        scanf("%d",&n);
        if(n>highest)
        {
            highest=n;
            position=i;
        }
    }
    printf("%d\n",highest);
    printf("%d\n",position);
   return 0;
}
