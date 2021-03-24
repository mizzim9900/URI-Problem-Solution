#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b,c,AB,BC;
scanf("%d%d%d",&a,&b,&c);
AB=(a+b+abs(a-b))/2;
BC=(b+c+abs(b-c))/2;
if(AB>BC)
    printf("%d eh o maior\n",AB);
else
    printf("%d eh o maior\n",BC);
}
