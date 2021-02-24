#include<stdio.h>
#include<math.h>
int main()
{
    int i,N,sum;
    scanf("%d",&N);
    if(5<N && 2000>N)
    {
    for(i=2;i<=N;i=i+2)
    {
        sum=pow(i,2);
        printf("%d^2 = %d\n",i,sum);
    }

}
}

