#include <iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter the natural number"<<endl;
    cin>>number;

    cout<<"The Divisors of the number "<<number<<" are"<<endl;
    //cout<< 1 << " " << number << " ";
    //for(int divisor = 2; divisor<=(number/2); divisor++)
    
    for(int divisor = 1; divisor<=(number); divisor++)
    {
        if((number % divisor)==0)
            cout<<divisor<< " ";
    }
    return 0;
}