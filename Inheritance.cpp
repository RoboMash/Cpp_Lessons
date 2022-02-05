#include <iostream>
using namespace std;

/* Inheritance in C++ */

// derived class syntax
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
// {
//    class members/methods/etc....
// };

// NOTE: 1. By default, the visibilty mode is private
//       2. Private visibility mode: Public members of the base class becomes private members of the derived class
//       3. Public visibility mode: Public members of the base class becomes public members of the derived class
//       4. Private members cannot and never be inherited from base class.

//Base Class creation
class Employee   
{
    public:
    int id;
    float salary;
        Employee(int inpId)
        {
            id = inpId;
            salary = 34.0;
        }
        Employee(){}
};

//Derived class creation
class Programmer : private Employee
{
    public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;
    void getData()
    {
        cout<<id<<endl;
    }
};


int main()
{
    Employee harry(1), rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;

    Programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    skillF.getData();

    return 0;
}