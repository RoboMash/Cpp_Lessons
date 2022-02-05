#include <iostream>
using namespace std;

int main()
{
    //basic example
    int a = 7;
    int* ptr = &a;

    cout<<"The value of a is "<<*(ptr)<<endl;

    //new keyword operator
    int *p = new int(786);
    cout<<"The value at address p is "<<*(p)<<endl;

    //to allocate array using new keyword operator
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;

    return 0;
}