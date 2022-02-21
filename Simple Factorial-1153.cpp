#include<iostream>
using namespace std;
int recursive(int);
int main()
{
    int n,sum;
    cin>>n;
    sum=recursive(n);
    cout<<sum<<endl;
}
int recursive(int a)
{
    if(a<=1)
        return a;
    else
        return a*recursive(a-1);
}
