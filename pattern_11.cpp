#include<iostream>
using namespace std;
int main()
{
    int n=5,i,j,k,l;
    for(i=1;i<=n-1;i++)
    {
        for ( j = 1; j <= i-1; j++)
        {
            cout<<" ";
        }
        for(k=1;k<=(n-i)*2;k++)
        {
            if(k==1||k==(n-i)*2)
            cout<<"*";
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<n-i;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=2*i;k++)
        {
            if(k==1||k==2*i)
            cout<<"*";
            else
            {
                cout<<" ";
            }
        }
        cout<< endl;
    }
    return 0;
}