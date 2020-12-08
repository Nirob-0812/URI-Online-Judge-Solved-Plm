#include<stdio.h>
int main()
{
    int a[100],n=3,max,f,s,t;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        f=a[0];
        s=a[1];
        t=a[2];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1; j<n;j++)
        {
            if(a[i]>a[j])
            {
            max=a[i];
            a[i]=a[j];
            a[j]=max;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);}
        printf("\n%d\n%d\n%d\n",f,s,t);
    return 0;
}
