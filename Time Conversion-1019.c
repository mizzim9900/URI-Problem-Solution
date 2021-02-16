#include<stdio.h>
main()
{
    int N,a,b;
    scanf("%d",&N);
     a=N/3600;
     N=N-(a*3600);
     b=N/60;
     N=N-(b*60);
    printf("%d:%d:%d\n",a,b,N);
}
