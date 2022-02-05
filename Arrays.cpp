#include <iostream>
using namespace std;

int main()
{
    //Array example type1
    int marks[4] = {23, 45, 56, 89};
    
    cout<<"These are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    //Array example type2
    int mathmarks[4];
    mathmarks[0] = 2278;
    mathmarks[1] = 738;
    mathmarks[2] = 378;
    mathmarks[3] = 578;

    cout<<"These are math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    //To change the value of array between the code
    int scores[4] = {32, 25, 96, 79};
    
    cout<<"These are scores"<<endl;
    scores[2] = 455;
    cout<<scores[0]<<endl;
    cout<<scores[1]<<endl;
    cout<<scores[2]<<endl;
    cout<<scores[3]<<endl;
    
    //Using Loops for arrays
    for (int i=0; i<4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    //Pointers & arrays together

    int* p = marks;
    cout<<" The value of marks[0] is "<<*p<<endl;
    cout<<" The value of marks[1] is "<<*(p+1)<<endl;
    cout<<" The value of marks[2] is "<<*(p+2)<<endl;
    cout<<" The value of marks[3] is "<<*(p+3)<<endl;


    return 0;
}