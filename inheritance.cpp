//need to be reconsidered due to some conceptual error

#include<iostream>
#include<string>

using namespace std;
class gamingSystem //for creating multiple inheritance
{
    public:
    gamingSystem()
    {
        cout<<"Derived class 2 called";
    }
    //no attributes here
};



class laptop //created a base class
{
    public:
    laptop() //creating a constructor
    {
        cout<<"Base Class 2 Called"<<endl;
    }
    string name; //attributes of class
    float price;
};

class gamingLaptop : public laptop , public gamingSystem// cerated a derived class, derived class inheriting from its base class
{
    public:
    gamingLaptop() // creating a constructor
    {
        cout<<"Derived Class Called"<<endl;
    }
    string name;
    int vram;
};

int main()
{
    gamingLaptop lap1; //object of derived laptop
    return 0;
}