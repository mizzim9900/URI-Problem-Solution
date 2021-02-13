#include<stdio.h>
main()
{
    FILE *file;
    int a,b;
    file=fopen("text4.txt","w");
    scanf("%d",&a);
    fprintf(file,"%d",a);
    b=a*2;
    printf("%d minutos\n",b);
}
