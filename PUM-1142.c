#include<stdio.h>
int main()
{
    FILE *file;
    file=fopen("text 15.txt","w");
    int N,i;
    scanf("%d",&N);
    fprintf(file,"%d",N);
    for(i=1;i<N*4;i=i+4)
    {
        printf("%d %d %d PUM\n",i,i+1,i+2);
    }
}
