#include<stdio.h>
int main()
{
    FILE *file;
    file=fopen("text 19.txt","w");
    int N,i,a=-1,b=1,c;
    scanf("%d",&N);
    fprintf(file,"%d",N);
    if(N>0 && N<46)
    {
    for(i=1;i<=N;i++)
    {
        c=a+b;
        printf("%d",c);
        if(i<N)
        {
            printf(" ");
        }
        else
        {
            printf("\n");
        }
        a=b;
        b=c;
    }
}
}
