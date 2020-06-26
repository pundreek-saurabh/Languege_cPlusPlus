#include<iostream>
using namespace std;
int main()
{
    int n=7,i,j,k,l;
    for(i=1;i<=n-1;i++) //loop for n-1 rows
    {
        for(j=1;j<=i;j++) //loop for printing i number of elements in each row
        {
            if(j==1|| j==i)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    for(k=1;k<=n;k++) //loop for last row i.e, nth row
        {
            cout<<"*";
        }
    return 0;
}