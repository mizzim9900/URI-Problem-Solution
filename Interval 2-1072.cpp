#include<iostream>
using namespace std;
int main()
{
    int N,X,j=0,l=0;
    cin>>N;
    for (int i=1;i<=N;i++)
    {
        cin>>X;
    if (X>=10 && X<=20)
        j++;
    else
        l++;
    }
    cout<< j <<" in"<<endl;
    cout<<l<<" out"<<endl;
}
