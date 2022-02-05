#include <iostream>
using namespace std;

/* inline function: used when multipleline of codes with simple conditions are to be executed */
/* it should not be used for recurrsion and static variables */

inline int product(int a, int b)
{
    return a*b;
}

int main()
{
    int a, b;
    cout<<"Enter the value of a and b "<<endl;
    cin>>a>>b;

    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    return 0;
}



/* Default Arguments */

float MoneyReceived(int CurrentMoney, float Factor= 1.04)
{
    return CurrentMoney * Factor;
}

int main()
{
    int a, b;
    int Money = 100000;
    cout<<"if you have "<<Money<<" Rs in your bank account, you will receive "<<MoneyReceived(Money)<< "Rs after 1 year"<<endl;
    cout<<"For VIP: if you have "<<Money<<" Rs in your bank account, you will receive "<<MoneyReceived(Money, 1.1)<< "Rs after 1 year"<<endl;
    return 0;
}

/* Constant Arguments */

int strlen(const char *p)
{

}

