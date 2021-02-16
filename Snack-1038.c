#include<stdio.h>
main()
{
    int X,Y;
    float n,sum;
    scanf("%d%d",&X,&Y);
    if(X==1)
    n=4.00;
    else if(X==2)
        n=4.50;
    else if(X==3)
        n=5.00;
    else if(X==4)
        n=2.00;
    else if(X==5)
        n=1.50;
        sum=n*Y;
        printf("Total: R$ %.2f\n",sum);
}
