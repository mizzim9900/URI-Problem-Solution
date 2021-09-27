#include<stdio.h>
int main()
{
    int n,x,y,i;
    float sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&x,&y);
        if(y!=0)
        {
            sum=(float)x/y;
            printf("%.1f\n",sum);
        }
        else
            printf("divisao impossivel\n");
    }
}
