#include<stdio.h>
int main()
{
float n,l=0.0,sum;
int i,s=0;
for(i=1;i<=6;i++)
{
    scanf("%f",&n);
    if(n>0.0)
    {
        s++;
        l=l+n;
    }
}
sum=l/s;
printf("%d valores positivos\n%.1f\n",s,sum);
}




