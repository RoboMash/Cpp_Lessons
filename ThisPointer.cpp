#include <iostream>
using namespace std;

/* THIS POINTER= it is a keyword which is a pointer that points to the object which invokes the member function. It is also used in returing values */

class A
{
    int a;
    public:
        void setData(int a)
        {
            this->a = a;
        }

        void getData()
        {
            cout<<"The value of a is "<<a<<endl;
        }
};


int main()
{
    A a;
    a.setData(4);
    a.getData();
    return 0;
}