#include<stdio.h>
main()
{
    int A,i,j,k,l;
    scanf("%d",&A);
    i=A/365;
    A=A-(i*365);
    j=A/30;
    A=A-(j*30);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",i,j,A);

}
