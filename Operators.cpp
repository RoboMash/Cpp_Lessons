#include <iostream>
using namespace std;

int main()
{
    int a=4, b=5;
    cout<<"Operators in C++"<<endl;
    cout<<endl;

    //Arithmetic Operators
    cout<<"Following are the Arithmetic operators in C++"<<endl;
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;

    // Assignment operators & //Comparison operators

    cout<<"Following are the Comparison operators in C++"<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<"The value of a>b is "<<(a==b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<endl;

    //Logical Operators

    cout<<"Following are the Logical operators in C++"<<endl;
    cout<<"The value of AND operator is "<<((a==b) && (a<b))<<endl;
    cout<<"The value of OR operator is "<<((a==b) || (a<b))<<endl;
    cout<<"The value of NOT operator is "<<(!(a==b))<<endl;

    return 0;
}