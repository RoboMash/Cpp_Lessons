#include <iostream>
using namespace std;

/* defining function */
int sum(int a, int b)
{
    int c = a+b;
    return c;
}

int main()
{
    int num1, num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1, num2);
    return 0;
}


/* function prototyping */
/* type function-name (arguments) */

int sum(int a, int b); // defining prototyoe
void g(void); //defining another prototype

int main()
{
    int num1, num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1, num2);
    g();
    return 0;
    /* here num1 and num2 are called ACTUAL PARAMETERS */
}

int sum(int a, int b)
{
    int c = a+b;
    return c;
    /* here a and b are called FORMALPARAMETERS which will be taking values from actual parameters - num1 and num2 */ 
}

void g()
{
    cout<<"\n Hello, mash";
}