#include<iostream>
using namespace std;
int main()
{
    int n=5,i,j,k,l;
    for(i=1;i<=n-1;i++) //loop for printing n-1 rows
    {
        for(j=1;j<=n-i;j++) //loop for printing spaces
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)//loop for printing stars and spaces
        {
            if(k==1||k==i)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++) //loop for last row i.e, nth row
    {
        cout<<"*";
    }
    return 0;
}