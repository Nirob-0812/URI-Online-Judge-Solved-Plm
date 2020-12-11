#include<stdio.h>
int main()
{
    int x,alcohol=0,gasoline=0,disel=0;
    while(1)
    {
        scanf("%d",&x);
        if(x==1)
        {
            alcohol++;
        }
        if(x==2)
        {
            gasoline++;
        }
        if(x==3)
        {
            disel++;
        }
        if(x==4)
        {
            printf("MUITO OBRIGADO\n");
            printf("Alcool: %d\n",alcohol);
            printf("Gasolina: %d\n",gasoline);
            printf("Diesel: %d\n",disel);
            break;

        }

    }
    return 0;
}
