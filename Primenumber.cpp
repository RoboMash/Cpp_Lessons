#include <iostream>
using namespace std;

int main()
{
    int num, div;  /*number and divisor*/
    bool isprime = true;
    cout<<"Enter the number to check for prime or composite"<<endl;
    cin>>num;

    if (num<1)
        cout<<"Number needs to be greater than 1";
    else if(num==1)
        cout<<"1 is niether prime nor composite";
    else {
        for (div = 2; div<=(num/2); div++)
        {
            if ((num%div)==0)
            {
                isprime = false;
                break;
            }
        }
        if (isprime)
            cout<< num << " is a Prime number";
        else
            cout<< num << " is a Composite number";
    }
    return 0;
}