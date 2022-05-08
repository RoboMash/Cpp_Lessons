#include <iostream>
using namespace std;

int main()
{
    int number, t1=0, t2=1, nextTerm;
    cout<<"Enter the number of terms"<<endl;
    cin>>number;

    for(int counter=1; counter<=number; counter++)
    {
        cout<<t1<<" ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}