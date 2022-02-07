#include <iostream>

using namespace std;

int main() {
 int x,y,sum=0;
cin>>x;
cin>>y;
if(x>y)
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
else if(x==y)
{
    cout<<sum<<endl;
}
else
{
     if(x%2==0)
         {
             y=y+1;
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

    return 0;
}

