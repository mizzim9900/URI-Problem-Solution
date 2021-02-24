#include<stdio.h>
int main()
{
    int i,n,j=0,k=0,l=0,s=0;
     for(i=0;i<5;i++)
     {
         scanf("%d",&n);
         if(n>0)
            {
            j=j+1;
         if(n%2==0)
            l=l+1;
         else if(n%2==1)
            k=k+1;
            }
         else
         {
            if(n<0)
            s=s+1;
            {
             if(n%2==0)
            l=l+1;
         else if(n%2==-1)
            k=k+1;
            }
     }
}
printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n",l,k);
printf("%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",j,s);
}
