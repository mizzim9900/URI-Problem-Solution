#include<stdio.h>
int main()
{
int i,s=0,n;
for(i=1;i<=5;i++)
{
    scanf("%d",&n);
    if(n%2==0)
    {
        s++;
    }
}
printf("%d valores pares\n",s);
}





