#include<stdio.h>
#include<math.h>
main()
{
    float A,B,C,i,j,R1,R2;
    scanf("%f%f%f",&A,&B,&C);
    i=(B*B)-(4*A*C);
    j=2*A;
    if(i>0 && j!=0)
    {
        R1=(-B+sqrt(i))/j;
        R2=(-B-sqrt(i))/j;
        printf("R1 = %.5f\nR2 = %.5f\n",R1,R2);
    }
    else
        printf("Impossivel calcular\n");
}
