#include <iostream>
using namespace std;

/* Using struct method 1 */
struct employee
{
    /*data*/
    int eId;
    char favChar;
    float salary;
};

int main()
{
    struct employee harry;
    harry.eId = 1;
    harry.favChar = 'c';
    harry.salary = 120000000;
    cout<<"The value is "<<harry.eId<<endl;
    cout<<"The value is "<<harry.favChar<<endl;
    cout<<"The value is "<<harry.salary<<endl;
    return 0;
}

/* Using struct method type 2 */
typedef struct employee
{
    /*data*/
    int eId;
    char favChar;
    float salary;
} ep;

int main()
{
    ep harry;
    harry.eId = 1;
    harry.favChar = 'c';
    harry.salary = 120000000;
    cout<<"The value is "<<harry.eId<<endl;
    cout<<"The value is "<<harry.favChar<<endl;
    cout<<"The value is "<<harry.salary<<endl;
    return 0;
}

/* Union with using memory optimization */
union money
{
    /*data*/
    int rice;
    char car;
    float pounds;
};

int main()
{
    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.car;
    return 0;
}

/* enum is C++ method 1 */
int main()
{
    enum Meal{breakfast, lunch, dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    return 0;
}

/* enum is C++ method 2 */
int main()
{
    enum Meal{breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<m1<<endl;
    return 0;
}
