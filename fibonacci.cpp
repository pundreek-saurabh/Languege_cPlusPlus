#include<iostream>
using namespace std;
int main()
{
    int n,i,a=0,b=1,fib;
    cout<<"Enter the terms you want from scratch:"<<endl;
    cin>>n;
    cout<<a<<endl<<b<<endl;
    for(i=0;i<n-2;i++)
    {
        fib=a+b;
        a=b;
        b=fib;
        cout<<fib<<endl;
    }
    return 0;
}