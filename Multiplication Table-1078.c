
#include<stdio.h>
int main()
{
    int i,N,l;
    scanf("%d",&N);
    if(N>1 && N<1000)
    {
    for(i=1;i<=10;i=i+1)
    {
        l=N*i;
        printf("%d x %d = %d\n",i,N,l);
    }
    }
}
