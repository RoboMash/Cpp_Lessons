#include <iostream>
using namespace std;

int main()
{
    int num, fact=1;
    cout<<"Enter the number"<<endl;
    cin>>num;

    if (num<0)
        cout<<"Cannot find the factorial for a negative number"<<endl;

    else if(num<=1)
        cout<<num<<"!="<<fact;

    else
    {
        for(int counter = num; counter>=2; counter--)
        {
            fact = fact * counter;
        }
        cout<<num<<"!="<<fact;
    }

    return 0;
}