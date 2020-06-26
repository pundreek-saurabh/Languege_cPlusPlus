#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=1; i<=n;i++)
    {
        for(int j=1;j<=i-1; j++)
        {
            cout<<"    "; //for a couple of spaces
        }
        for(int k=0; k<=n-i;k++)
        {
            cout<<"* "; // for star and space for better visibility.
        }
        cout<<endl;
    }
    return 0;
}