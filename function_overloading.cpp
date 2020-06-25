#include<iostream>
using namespace std;

void run()
{
    cout<<"Run is running"<<endl;
}

void run(int a) //same name of function can be run by differentiating its parameter
{
    cout<<"Run with "<< a << " int is running";
}

int main()
{
    run();
    run(5);
    return 0;
}