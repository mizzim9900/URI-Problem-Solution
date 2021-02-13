#include<stdio.h>
main()
{
    FILE *file;
    double a,b,c,i,j,l,m,n,pi=3.14159;
    file=fopen("text2.txt","w");
    scanf("%lf%lf%lf",&a,&b,&c);
    fprintf(file,"%lf%lf%lf",a,b,c);
    i=0.5*a*c;
    j=pi*c*c;
    l=0.5*(a+b)*c;
    m=b*b;
    n=a*b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",i,j,l,m,n);
}

