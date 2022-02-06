#include <iostream>
using namespace std;

template <class T1=int, class T2=float, class T3=char>
class Mash
{
    public:
        T1 a;
        T2 b;
        T3 c;
        Mash(T1 x, T2 y, T3 z)
        {
            a = x;
            b = y;
            c = z;
        }

        void display()
        {
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
        }
};


int main()
{
    Mash<> h(4, 6.9, 'p');  //assigning data types by default 
    h.display();

    cout<<endl;

    Mash<float, char, char> g(2.4, 'q', 'p'); //assigning datypes manually
    g.display();
    return 0;
}