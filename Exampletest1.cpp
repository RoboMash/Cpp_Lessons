#include <iostream>
#include <cmath>
using namespace std;

/* 
Create 2 classes:
    1. SimpleCalculator - takes input of 2 numbers using a utility functions and performs +,-,*,/ and displays the results using another function.
    2. ScientificCalculator - takes input of 2 numbers using a utility function and performs any four scientific operations of your choice.

Create another class HybridCalculator and inherit it using these 2 classes:
Q1. What type of inheritance are you using? --> Multiple Inheritance
Q2. Which mode of inheritance are you using? --> Publically inherit both calculators
Q3. Create an object of HybridCalculator and display results of simple and scientific calculator
Q4. How is code reusability implemented?
*/

class SimpleCalculator
{
    int a, b;
    public:
        void getDataSimple()
        {
            cout<<"Enter the value of a"<<endl;
            cin>>a;
            cout<<"Enter the value of b"<<endl;
            cin>>b;

        }

        void performOperationsSimple()
        {
            cout<<"The value of a+b is: "<<a+b<<endl;
            cout<<"The value of a-b is: "<<a-b<<endl;
            cout<<"The value of a*b is: "<<a*b<<endl;
            cout<<"The value of a/b is: "<<a/b<<endl;
        }
};

class ScientificCalculator
{
    int a, b;
    public:
        void getDataScientific()
        {
            cout<<"Enter the value of a"<<endl;
            cin>>a;
            cout<<"Enter the value of b"<<endl;
            cin>>b;

        }

        void performOperationsScientific()
        {
            cout<<"The value of cos(a) is: "<<cos(a)<<endl;
            cout<<"The value of sin(a) is: "<<sin(a)<<endl;
            cout<<"The value of exp(a) is: "<<exp(a)<<endl;
            cout<<"The value of tan(a) is: "<<tan(a)<<endl;
        }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{

};


int main ()
{
    HybridCalculator calc;
    calc.getDataSimple();
    calc.performOperationsSimple();
    
    calc.getDataScientific();
    calc.performOperationsScientific();
    return 0;
}

