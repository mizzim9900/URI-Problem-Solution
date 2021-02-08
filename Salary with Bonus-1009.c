#include<stdio.h>
main()
{
    FILE *file;
    file=fopen("text.txt","w");
    double A,B,TOTAL;
    char name[40];
    gets(name);
    fprintf(file,"%s",name);
    scanf("%lf%lf",&A,&B);
    TOTAL=A+B*.15;
    printf("TOTAL = R$ %.2lf\n",TOTAL);
}
