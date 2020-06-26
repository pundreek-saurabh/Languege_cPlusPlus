#include<iostream>
using namespace std;
int main()
{
    int n=5,i,j,k,l;
    for(i=1;i<=n;i++)
    {
        //loop for printing space in pattern
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        //loop for printing digit in pattern
        for(k=1;k<=2*i-1;k++)
        {
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}