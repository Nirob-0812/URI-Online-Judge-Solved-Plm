#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="vertebrado",a1[]="ave",a11[]="carnivoro",a111[]="aguia";
    char a12[]="onivoro",a112[]="pomba",a2[]="mamifero",a211[]="homem";
    char a22[]="herbivoro",a223[]="vaca";
    char b[]="invertebrado",b1[]="inseto",b11[]="hematofago",b111[]="pulga";
    char b122[]="lagarta",b2[]="anelideo",b211[]="sanguessuga",b222[]="minhoca";
    char x[20],y[20],z[20];
    scanf("%s%s%s",&x,&y,&z);
    if(0==strcmp(a,x))
    {
        if(0==strcmp(a1,y))
        {
            if(0==strcmp(a11,z))
            {
                printf("%s\n",a111);
            }
               if(0==strcmp(a12,z))
                printf("%s\n",a112);

        }
           if(0==strcmp(a2,y))
        {
            if(0==strcmp(a12,z))
            {
                printf("%s\n",a211);
            }
            if(0==strcmp(a22,z))
               printf("%s\n",a223);

        }
    }
    if(0==strcmp(b,x))
    {
        if(0==strcmp(b1,y))
        {
            if(0==strcmp(b11,z))
                printf("%s\n",b111);
            if(0==strcmp(a22,z))
                printf("%s\n",b122);
        }
          if(0==strcmp(b2,y))
        {
            if(0==strcmp(b11,z))
                printf("%s\n",b211);
            if(0==strcmp(a12,z))
                printf("%s\n",b222);
        }
    }
    return 0;
}

