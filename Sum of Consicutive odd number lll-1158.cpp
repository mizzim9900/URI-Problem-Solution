#include <iostream>

using namespace std;

int main() {
 int N,x,y,sum=0;
 cin>>N;
 for (int i=0;i<N;i++)
 {
     cin>>x;
     cin>>y;
     if(x%2==0)
         {
             x=x+1;
              for(int j=1;j<=y;j++,x=x+2)
              {
                  sum=sum+x;
              }
         }
         else
         {
              for(int j=1;j<=y;j++,x=x+2)
              {
                  sum=sum+x;
              }
         }
         cout<<sum<<endl;
         sum=0;
 }

    return 0;
}
