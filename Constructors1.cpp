#include <iostream>
using namespace std;

class Complex
{
    int a, b;
    public:
    //creating a constructor

    Complex(void); // constructor declaration

    void printNumber()
    {
        cout<<" Your number is "<<a<< " + "<<b<< " i "<<endl;
    }

};

Complex::Complex(void) // this is a default constructor as it takes no parameter
{
    a = 10;
    b = 20;

}

int main()
{
    Complex c;
    c.printNumber();
    return 0;
}

