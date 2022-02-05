#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; //static or class variable--it starts with default value 0 and it is shared by all objects
    
    public:
        void setData(void)
        {
            cout<<"Enter the ID"<<endl;
            cin>>id;
            count++;
        }

        void getData(void)
        {
            cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
        }

        static void getcount(void)
        {
            cout<<"The value of count is "<<count<<endl;        
        }
};

int Employee::count; //writing this scope outside class for static variable
int main()
{
    Employee Mash, Sash, Rash;
    Mash.setData();
    Mash.getData();
    Employee::getcount();
    
    Sash.setData();
    Sash.getData();
    Employee::getcount();

    Rash.setData();
    Rash.getData();
    Employee::getcount();


    return 0;
}