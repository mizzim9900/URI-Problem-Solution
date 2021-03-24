#include<stdio.h>
int main()
{
    int X,Y,i,l,j=1;
    scanf("%d%d",&X,&Y);
    if((1<X && 20>X) && (X<Y && Y<100000))
    {
    for(i=1;j<=Y;i++)
    {
        for(l=1;l<=X;l++,j++)
        {
            printf("%d",j);
            if(l<X)
                printf(" ");
        }
        printf("\n");
    }
    }
}
