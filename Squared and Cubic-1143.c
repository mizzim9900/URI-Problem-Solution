#include<stdio.h>
int main()
{
    FILE *file;
    file=fopen("text 14.txt","w");
    int N,i;
    scanf("%d",&N);
    fprintf(file,"%d",N);
    for(i=1;i<=N;i++)
    {
        printf("%d %d %d\n",i,i*i,i*i*i);
    }
}
