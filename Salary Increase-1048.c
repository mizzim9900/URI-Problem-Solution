#include<stdio.h>
int main()
{
    float a,sum,s;
    scanf("%f",&a);
    if(a>=0 && a<=400.00)
    {
        s=a*.15;
        sum=a+s;
         printf("Novo salario: %.2f\nReajuste ganho: %.2f\n",sum,s);
        printf("Em percentual: 15 %%\n");
    }
    else if(a>=400.01 && a<=800.00)
    {
        s=a*.12;
        sum=a+s;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\n",sum,s);
        printf("Em percentual: 12 %%\n");
    }
    else if(a>=800.01 && a<=1200.00)
    {
        s=a*.10;
        sum=a+s;
         printf("Novo salario: %.2f\nReajuste ganho: %.2f\n",sum,s);
        printf("Em percentual: 10 %%\n");
    }
    else if(a>=1200.01 && a<=2000.00)
    {
        s=a*.07;
        sum=a+s;
         printf("Novo salario: %.2f\nReajuste ganho: %.2f\n",sum,s);
        printf("Em percentual: 7 %%\n");
    }
    else
    {
        s=a*.04;
        sum=a+s;
         printf("Novo salario: %.2f\nReajuste ganho: %.2f\n",sum,s);
        printf("Em percentual: 4 %%\n");
    }
}
