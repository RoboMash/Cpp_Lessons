#include <iostream>
using namespace std;

/* Arrays in objects */
class Employee
{
    int id;
    int salary;
    public:
        void setid(void)
        {
            salary = 122;
            cout<<"Enter the id of employee "<<endl;
            cin>>id;
        }

        void getid()
        {
            cout<<"The id of this employee is "<<id<<endl;
        }
};


int main()
{
    Employee Company[4]; //using arrays
    for (int i=0; i<4; i++)
    {  
        Company[0].setid();
        Company[0].getid();
    }
    return 0;
}


/* Passing objects */

class complex 
{
    int a;
    int b;

    public:
    void setData(int v1, int v2)
    {
       a = v1;
       b = v2;
    }

    void setDataBySum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        a = o1.b + o2.b;

    }

    void printNumber()
    {
        cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
    
};

int main()
{
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();
    
    
    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();

    return 0;
}
