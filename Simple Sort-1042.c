#include<stdio.h>
int main()
{
    FILE *file;
    int a,b,s[40],s2[40],i,j,l;
    file=fopen("text7.txt","w");
    for(i=0;i<3;i++)
    {
    scanf("%d",&s2[i]);
    fprintf(file,"%d ",s2[i]);
    }
    for(i=0;i<3;i++)
    {
        s[i]=s2[i];
    }
    for(l=0;l<3;l++)
    {
        for(b=0;b<(3-l-1);b++)
            {
        if(s[b]>s[b+1])
        {
            a=s[b];
            s[b]=s[b+1];
            s[b+1]=a;
        }
        }
    }
for(i=0;i<3;i++)
{
    printf("%d\n",s[i]);
}
printf("\n");
for(i=0;i<3;i++)
{
    printf("%d\n",s2[i]);
}

}
