#include<stdio.h>
main()
{
    float A,B,C,MEDIA;
    scanf("%f%f%f",&A,&B,&C);
    if(A<=10.0 && B<=10.0 && C<=10.0)
        MEDIA=(A*2+B*3+C*5)/(2+3+5);
    printf("MEDIA = %.1lf\n",MEDIA);
}
