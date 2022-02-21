#include<iostream>
using namespace std;
int main()
{
    int x;
    while(1)
    {
        cin>>x;
        if(x!=0)
        {
        if(x%2==0)
        {
            cout<<(x*5)+20<<endl;
        }
        else
        {
           x=x+1;
           cout<<(x*5)+20<<endl;
        }
        }
        else
          break;
    }
}
