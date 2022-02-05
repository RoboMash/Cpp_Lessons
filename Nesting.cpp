#include <iostream>
#include <string>
using namespace std;

/* Nesting of member function in C++ */

class binary
{
 
private:

string s;

public:
    void read(void);            //read binary
    void chk_bin(void);         //check binary
    void ones_compliment(void); //Taking ones compliment
    void display(void);         //to display the value
};

void binary::read(void)
{
    cout<<" Enter a binary number"<<endl;
    cin>>s;  
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout<< "Incorrecr binary format"<<endl;
            exit(0);
        }
    }
}

void binary::ones_compliment(void)
{
    chk_bin(); // nesting of member function
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
     cout<<endl;
}

int main()
{
    binary b;
    b.read();
    b.display();
    //b.chk_bin(); // nesting of member function is done above for chk_bin
    b.ones_compliment();
    b.display();
    return 0;
}
