#include<iostream>
using namespace std;
int main()
{
    int n=5,i,j,k,l;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";  //for spaces in pattern
        }
        for(k=1;k<=2*i-1;k++) // for printing odd element in pattern
        {
            if(k==1||k==2*i-1)
            cout<<i ;
            else
            cout<< 0 ;
        }
        cout<<endl;
    }
    return 0;
}