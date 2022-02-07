#include<iostream>
using namespace std;
int main()
{
    unsigned n,i=0,l=0,j=0;
    for(int a=1;;a++)
    {
        cin>>n;
        if(n==1)
            i++;
        if(n==2)
            j++;
        if(n==3)
            l++;
        if(n==4)
            break;
    }
        cout<<"MUITO OBRIGADO"<<endl;
        cout<<"Alcool: "<<i<<endl;
        cout<<"Gasolina: "<<j<<endl;
        cout<<"Diesel: "<<l<<endl;
    return 0;
}
