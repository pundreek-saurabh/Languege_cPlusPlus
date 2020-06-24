#include<iostream>
using namespace std;
int main()
{
    int n,i,check;
    cout<<"Enter the number you want to check: "<<endl;
    cin>>n;
    for(i=1;i<=n*n/2;i++)
    {
         check = n/i;
    }
    if(check==1|| check==n)
    cout<<"It is a prime number"<<endl;
    else
    cout<<"It is not a prime number"<<endl;
    return 0;
}