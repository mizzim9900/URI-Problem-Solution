#include<stdio.h>
#include<math.h>
main()
{
    FILE *file;
    file=fopen("text3.txt","w");
    double x1,x2,y1,y2,a,b,c,d;
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    fprintf(file,"%.1lf %.1lf\n%.1lf %.1lf",x1,y1,x2,y2);
   a=(x2-x1)*(x2-x1);
   b=(y2-y1)*(y2-y1);
   c=a+b;
   d=sqrt(c);
   printf("%.4lf\n",d);
}
