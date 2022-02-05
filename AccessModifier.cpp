#include <iostream>
using namespace std;

/* Protected Access Modifier */

class Base
{
    protected:     // with this you can access/inhereit private member from base class
        int a;

    private:
        int b;

};

/* For a protected member:
                            1. Public Derivation       2. Private Derivation        3. Protected Derivation
1. Private members              NOT Inherited               NOT Inherited                   NOT Inherited

2. Protected members            Protected                      Private                      Protected

3. Public members               Public                         Private                      Protected

*/

class Derived : protected Base
{

};


int main()
{
    Base b;
    Derived d;
    cout<<d.a; // willnot workbecasue a is protected in both base and derived classes
    return 0;
}