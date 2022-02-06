#include <iostream>
using namespace std;

/*
Class template with Multiple parameters (ONE, TWO or MORE THAN TWO)
Template <class T1, class T2....(COMMA SEPARATED)>
class nameOfClass
{
    //body
}
*/

template <class T1, class T2>
class myClass
{
    public:
        T1 data1;
        T2 data2;
        myClass(T1 a, T2 b)
        {
            data1 = a;
            data2 = b;
        }
        void display()
        {
            cout<<this->data1<<endl<<this->data2;
        }

};


int main()
{
    //myClass <int, char> obj(1, 'c');   /*Using int and char data types*/
    //obj.display();

                //OR

    myClass <int, float> obj(1, 2.9);   /*Using int and float data types*/
    obj.display();

    return 0;
}