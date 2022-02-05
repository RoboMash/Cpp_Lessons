#include <iostream>
using namespace std;

/* Objects Memory allocation */

class Shop
{
    int itemID[100];
    int itemPrice[100];
    int counter;

    public:
        void initcounter(void) { counter = 0;}
        void setPrice(void);
        void displayPrice(void);
};

void Shop::setPrice(void)
{
    cout<<"Enter ID of your item number "<<counter+1<<endl;
    cin>>itemID[counter];
    cout<<"Enter cost of your item"<<endl;
    cin>>itemPrice[counter];
    counter ++;
}

void Shop::displayPrice(void)
{
    for (int i=0; i<counter; i++)
    {
        cout<<"The price of item with ID "<<itemID[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main()
{
    Shop zara;
    zara.initcounter();
    zara.setPrice();
    zara.setPrice();
    zara.setPrice();
    zara.displayPrice();
    return 0;
}