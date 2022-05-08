#include <iostream>
using namespace std;

int fact(int n)
{
    if (n<=1)
        return 1;
    
    return n * fact(n-1);
}

int main()
{
    int number, result;
    cout<<"Enter the non-negative number to find factorial"<<endl;
    cin>>number;

    result = fact(number);
    cout<<number<<"! = "<<result;
    return 0;
}