#include<stdio.h>
int main()
{
    int i,N,l;
    scanf("%d",&N);
    if(N<10000)
    {
    for(i=2;i<=10000;i=i+N)
    {
        printf("%d\n",i);
    }
    }
}
