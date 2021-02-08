#include<stdio.h>
main()
{
    double A,B,MEDIA;
    scanf("%lf%lf",&A,&B);
    if(A<=10 && B<=10)
        MEDIA=(A*3.5+B*7.5)/(3.5+7.5);
    printf("MEDIA = %.5lf\n",MEDIA);
}
