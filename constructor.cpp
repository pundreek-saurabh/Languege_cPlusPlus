#include<iostream>
#include<string>

using namespace std;

class laptop
{
    public:
    string name;
    float price;
    laptop() //creating a constructor
    {
        cout<<"Name: "<<name<<endl<<"Price: "<<price<<endl; //here it will take default values or garbage values
    }

    laptop(string lname, float lprice) //overloading a constructor
    {
        name=lname;
        price=lprice;
        cout<<"Name: "<<name<<endl<<"Price: "<<price<<endl;
    }
    laptop(const laptop &p) //copy constructor, values passed by reference
    {
        name=p.name;
        price=p.price+7500.0;
        cout<<"Name: "<<name<<endl<<"Price: "<<price<<endl;
    }
    ~laptop() //destructor created and can't be overloaded and will destruct objects in reverse order
    {
        cout<<"Destructing "<<price<<endl;
    }
};

//if there is no contructor is created then default constructor will run as filling garbage value in all the variables

int main()
{
    laptop l; //if nothing more than this is mentioned then constructor will run which we have created in class
    laptop m("HP",32210.0);
    laptop k=m; //it will store data of "m" in new one i.e,"k"
    return 0;
}
