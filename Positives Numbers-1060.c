#include<stdio.h>
int main()
{
float n;
int i,s=0;
for(i=1;i<=6;i++)
{
    scanf("%f",&n);
    if(n>0.0)
    {
        s++;
    }
}
printf("%d valores positivos\n",s);
}



