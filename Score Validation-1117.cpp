#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float x,sum=0;
    int i=0;
    while(1)
    {
        cin>>x;
       if(x>=0  && x<=10.0)
       {
           i++;
           sum=sum+x;
           if(i==2)
           {
               break;
           }
       }
       else
       {
           cout<<"nota invalida"<<endl;
       }
    }
    cout<<setprecision(2)<<fixed;
    cout<<"media = "<<sum/2<<endl;
}
