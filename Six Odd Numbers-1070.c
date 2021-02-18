#include<stdio.h>
int main()
{
    int X,i;
    scanf("%d",&X);
    if(X%2==0)
    {
        for(i=X+1;i<=X+11;i=i+2)
            printf("%d\n",i);
    }
    else if(X%2==1)
    {
        for(i=X;i<=X+10;i=i+2)
        printf("%d\n",i);
    }
}
