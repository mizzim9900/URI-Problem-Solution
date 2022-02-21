#include <iostream>

using namespace std;

int main() {
 int N,x,y,sum=0,j=0;
 cin>>N;
 for(int i=1;i<=N;i++)
 {
cin>>x;
cin>>y;
if(x>y)
{
    if((x-y)>1)
    {
     if(y%2==0)
         {
             y=y+1;
              for(int j=y;j<x;j=j+2)
              {
                  sum=sum+j;
              }
         }
         else
         {
              for(int j=y+2;j<x;j=j+2)
              {
                  sum=sum+j;
              }
         }
         cout<<sum<<endl;
    }
    else
        cout<<sum<<endl;
}
else if(x==y)
{
    cout<<sum<<endl;
}
else
{
    if((y-x)>1)
    {
     if(x%2==0)
         {
             x=x+1;
              for(int l=x;l<y;l=l+2)
              {
                  sum=sum+l;
              }
         }
         else
         {
              for(int l=x+2;l<y;l=l+2)
              {
                  sum=sum+l;
              }
         }
         cout<<sum<<endl;
    }
    else
        cout<<sum<<endl;
}
sum=0;
 }
    return 0;
}


