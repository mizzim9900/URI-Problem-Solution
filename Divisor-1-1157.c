#include<stdio.h>
int main()
{
    FILE *file;
    file=fopen("text 20.txt","w");
    int N,i;
    scanf("%d",&N);
    fprintf(file,"%d",N);
    for(i=1;i<=N;i++)
    {
       if(N%i==0)
            printf("%d\n",i);
    }

}
