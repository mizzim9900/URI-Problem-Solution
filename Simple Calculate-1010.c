#include<stdio.h>
main()
{
    FILE *file;
    int i,a,b;
    float c,d,e,m;
    file=fopen("text1.txt","w");
    for(i=1;i<=2;i++)
    {
    scanf("%d%d%f",&a,&b,&c);
    fprintf(file,"%d %d %f\n",a,b,c);
    if(i==1)
      d=b*c;
    else
        e=b*c;
    }
    m=d+e;
    printf("VALOR A PAGAR: R$ %.2f\n",m);
}
