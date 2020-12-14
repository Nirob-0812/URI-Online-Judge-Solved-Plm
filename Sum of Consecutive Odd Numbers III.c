#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,sum=0,x,y;
        scanf("%d%d",&x,&y);
        if(x%2==0)
        {
            x=x+1;
        }
        else
            x=x;
        while(y--)
          {
            sum=sum+x;
            x=x+2;
          }
        printf("%d\n",sum);
    }
}
