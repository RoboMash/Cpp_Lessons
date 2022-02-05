#include <iostream>
using namespace std;

/* function overloading */

int add(int a, int b)
{
    cout<<"using function with 2 arguments"<<endl;
    return a+b;
}

int add(int a, int b, int c)
{
    cout<<"using function with 3 arguments"<<endl;
    return a+b+c;
}

int main()
{
    cout<<"The sum of a and b is "<<add(3, 6)<<endl;
    cout<<"The sum of a, b, and c is "<<add(3, 6, 9)<<endl;
    return 0;
}