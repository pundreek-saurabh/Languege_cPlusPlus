//need to be rechecked

#include<iostream>
#include<string>
using namespace std;
class laptop
{
    //it is by default private so its members like string and float can't be used outside the class
    string name;
    float price;
    public:
    laptop() //to make constructor public
    {
        name= "HP";
        price= 21320.00;
    }
    void show()
    {
        cout<<"name: " << name<<endl<<"price: "<<price<<endl;
    }
};



int main()
{
    laptop lap;
    lap.show
    return 0;
}