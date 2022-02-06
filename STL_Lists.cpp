#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)
{
    list<int> :: iterator it;
    for (it = lst.begin(); it!= lst.end(); it++)
    {
        cout<< *it<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> list1; //creating list of 0 Length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    list1.sort(); //sorting list
    display(list1);

    // list1.pop_back(); //removing element from back of list
    // display(list1);
    // list1.pop_front(); //removing element from front of list
    // display(list1);
    // list1.remove(1); //removing element from middle of list
    // display(list1);
    // list1.reverse(); //reversing the elements of list
    // display(list1);

    

    list<int> list2(3); //creating empty list of size 3
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    display(list2);
    list1.merge(list2); //merging the list 1
    cout<<"After merging the list 1: ";
    display(list1);
    return 0;
}
