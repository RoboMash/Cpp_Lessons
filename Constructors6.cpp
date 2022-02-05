#include <iostream>
using namespace std;

class Number
{
    int a;
    public:
        Number()
        {
            a = 0;
        }

        Number(int num)
        {
            a = num;
    
        }

        Number(Number &obj)
        {
            cout<<"Copy constructor called !!"<<endl;  //creating this copy constructor with a
            a = obj.a;
    
        }    // NOTE: When no copy constructor is found in code, then compiler supplies its own default copy constructor

        void display()
        {
            cout<<"The number for this object is "<<a<<endl;
        }
};

int main()
{
    Number x, y, z(45);

    x.display();
    y.display();
    z.display();

    Number z1(x);
    z1.display();
    
    return 0;
}

