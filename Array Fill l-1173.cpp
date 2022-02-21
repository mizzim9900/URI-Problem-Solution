#include<iostream>
using namespace std;
int main()
{
int n[10],v,i,j;
cin>>v;
for(i=v,j=0;j<10;i=i*2,j++)
{
    n[j]=i;
    cout<<"N["<<j<<"] = "<<i<<endl;
}
}

