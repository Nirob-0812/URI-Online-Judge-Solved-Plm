#include<stdio.h>
int main()
{
    while(1)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x==0 || y==0)
            break;
        else if(x>0 && y>0)
            printf("primeiro\n");
        else if(x>0 && y<0)
            printf("quarto\n");
        else if(x<0 && y<0)
            printf("terceiro\n");
        else if(x<0 && y>0)
            printf("segundo\n");
    }
    return 0;
}
