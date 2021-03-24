#include<stdio.h>
int main()
{
    FILE *file;
    file=fopen("text 12.txt","w");
    int X,Y,i;
    for(i=1;;i++)
        {
     scanf("%d%d",&X,&Y);
      fprintf(file,"%d %d\n",X,Y);
     if(X!=Y)
        {
    if(X<Y)
        printf("Crescente\n");
    else
        printf("Decrescente\n");
}
else
    break;
        }
}
