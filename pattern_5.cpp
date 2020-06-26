//This problem should be reconsidered

#include<iostream>
using namespace std;
int main()
{
    int n=7,i,j,k,l;
    for(int i=0;i<=n/2;i++) //loop for printing n/2 rows + one extra row
    {
        for(j=0;j<n;j++) //loop for printing n element in each row
        {
            if(j>=(n/2)-i && j<=(n/2)+i)
            cout<<" ";
            else
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=0;i<n/2;i++) //loop for printing other n/2 rows
    {
        for(j=0;j<n;j++) //loop for printing n element in each row
        {
            if(j<=i||j>=(n-i-1))
            cout<<"*";
            else
            cout<<" ";
        }
        cout<< endl;
    }
    return 0;
}