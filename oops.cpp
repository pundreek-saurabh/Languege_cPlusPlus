#include<iostream>
#include<string> //to use string datatype
using namespace std;
class laptop //class is keyword and laptop is user defined word
{
    public: //can be private public or protected

    string name; //variables to be used
    string processor;
    string brand;
    float price;

    void getdata() //member functions , methods to access data members
    {
        cout<<"Name: ";
        cin>>name;
        cout<<"Brand: ";
        cin>>brand;
        cout<<"Processor: ";
        cin>>processor;
        cout<<"Price: ";
        cin>>price;
    }
    void showdata()
    {
        cout<<name<<brand<<price<<processor;
    }
    void startup()
    {
        cout<<"laptop"<<name<<"has started";
    }
    void shutdown()
    {
        cout<<"laptop"<<name<<"is shutting down";
    }
}; //class name end with a semcolon.


int main()
{
    laptop laptop1; //laptop1 is the object of laptop class
    laptop1.getdata();
    laptop1.showdata();
    laptop1.shutdown();
    return 0;
}