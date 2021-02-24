#include<stdio.h>
int main()
{
    int f,l,s,a;
    scanf("%d%d",&f,&l);
    if(f>=l)
    {
    s=24-f;
    l=s+l;
     printf("O JOGO DUROU %d HORA(S)\n",l);
    }
    else if(l>f)
    {
    a=l-f;
    printf("O JOGO DUROU %d HORA(S)\n",a);
}
}
