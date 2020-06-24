#include<iostream>
using namespace std;

void swap_by_value(int a,int b)
{
    int t=b;
    b=a;
    a=t;
    cout<<"x"<<"="<<a<<"y"<<"="<<b<<endl;
}
void swap_by_reference(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
    cout<<"x"<<"="<<a<<"y"<<"="<<b<<endl;
}

int main()
{
    int x=7,y=10;
    cout<<"before swapping "<<x<<" "<<y<<endl;
    swap_by_value(x,y);
    cout<<"following is swap by reference:"<<endl;
    swap_by_reference(x,y);
    return 0;
}