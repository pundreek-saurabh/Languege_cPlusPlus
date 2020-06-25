//need to be rechecked because conceptual error is here

#include<iostream>
#include<string>

using namespace std;

class laptop //created a base class
{
    public:
    laptop() //creating a constructor
    {
        cout<<"Base Class 2 Called"<<endl;
    }
    string name; //attributes of class , or members
    float price;
};

class gamingLaptop : public laptop , public gamingSystem// cerated a derived class, derived class inheriting from its base class
{
    public:
    gamingLaptop() // creating a constructor
    {
        cout<<"Derived Class 1 Called"<<endl;
    }
    string name;
    int vram;
};

class gamingSystem : public gamingLaptop //for creating multiple inheritance
{
    public:
    gamingSystem()
    {
        cout<<"Derived class 2 called";
    }
    //no attributes here
};


int main()
{
    gamingSystem lap1; //object of derived laptop
    return 0;
}


