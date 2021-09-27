#include <iostream>

using namespace std;

int main() {
 int X[10],i,x,j;
 for(i=0;i<10;i++)
 {
     cin>>x;
     if(x<=0)
     {
         X[i]=1;
     }
     else
     {
         X[i]=x;
     }
 }
 for(j=0;j<10;j++)
 {
     cout<<"X["<<j<<"] = "<<X[j]<<endl;
 }
    return 0;
}
