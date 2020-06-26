#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=1; i<=n;i++)
    {
        //loop for printing spaces in pattern
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        //loop for printing star and space in pattern
        for(int k=1;k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}