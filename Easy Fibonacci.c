#include<stdio.h>
int main()
{
    int i,j,a[30],n;
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0;i<n;i++)
    {
        j=n-1;
        if(i==j)
            {
        //printf("%d\n",a[i]);
        goto nirob;
            }
        printf("%d ",a[i]);
    }
    nirob:
    return 0;
}
