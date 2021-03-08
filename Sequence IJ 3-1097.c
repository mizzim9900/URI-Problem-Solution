#include<stdio.h>
int main()
{
    int i,l;
    for(i=1,l=7;i<=9 && l<=15;i=i+2,l=l+2)
    {
     printf("I=%d J=%d\n",i,l);
     printf("I=%d J=%d\n",i,l-1);
     printf("I=%d J=%d\n",i,l-2);
}
}
