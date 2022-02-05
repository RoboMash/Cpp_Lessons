#include <iostream>
using namespace std;


 /* Adding two numbers using function directly OR call by Value */
int sum(int a, int b)
{
    int c = a+b;
    return c;
}

int main()
{   
    cout<<"The sum of 4 & 5 is "<<sum(4, 5)<<endl;
    return 0;
}



/* Swapping two variables OR Call by reference using pointers */
int sum(int a, int b)
{
    int c = a+b;
    return c;
}

void swapPointer(int* a, int* b) // temp  a  b
{
    int temp = *a;               //  4    4  5 
    *a = *b;                     //  4    5  5
    *b = temp;                   //  4    5  4

}

int main()
{   
    int a = 4, b = 5;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    swapPointer(&a, &b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    return 0;
}



/* Swapping two variables OR Call by Reference using C++ reference variables*/
int sum(int a, int b)
{
    int c = a+b;
    return c;
}

void swapReferenceVar(int &a, int &b) // temp  a  b
{
    int temp = a;                     //  4    4  5 
    a = b;                            //  4    5  5
    b = temp;                         //  4    5  4

}

int main()
{   
    int a = 4, b = 5;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    swapReferenceVar(a, b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    return 0;
}
