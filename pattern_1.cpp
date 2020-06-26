#include<iostream>
using namespace std;
int main()
{
    int n=9;
    //loop for the first line of the pattern
    for(int i=1;i<=n;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    //loop for the middle portion of pattern .
    for(int j=1;j<=n-2;j++)
    {
        cout<<"*";
        for(int i=1;i<=n-2;i++)
        {
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    //loop for the last line of the pattern
    for(int i=1;i<=n;i++)
    {
        cout<<"*";
    }
    cout<<"completed";
    return 0;
}
/*method 2 for the same problem:
for(int i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        if(i==1||i==n||j==1||j==n)
        cout<<"*";
        else
        cout<<" ";
    }
    cout<<endl;
}*/
