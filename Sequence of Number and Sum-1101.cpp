#include<iostream>
using namespace std;
int main()
{
    int m,n,sum=0;
    while(1)
    {
         cin>>m>>n;
        if(m>0 && n>0)
        {
        if(m>n)
        {
            for(int j=n;j<=m;j++)
            {
                sum=sum+j;
                cout<<j<<" ";
            }
            cout<<"Sum="<<sum<<endl;
        }
         else
            {
            for(int j=m;j<=n;j++)
            {
                sum=sum+j;
                cout<<j<<" ";
            }
            cout<<"Sum="<<sum<<endl;
        }
    }
    else
        break;
    sum=0;
    }
}
