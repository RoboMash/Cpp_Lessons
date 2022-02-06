#include <iostream>
using namespace std;

template <class T>
class Mash
{
    public:
    T data;
    Mash(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Mash <T> :: display()
    {
        cout<<data;
    }

void func(int a)
{
    cout<<"I am first func() "<<a<<endl;
}

template <class T>
void func1(T a)
{
    cout<<"I am templatized func () "<<a<<endl;
}



int main()
{
    //Mash<float> h(5.7);
    //Mash<char> h('c');
    // Mash<int> h(87);
    // cout<<h.data<<endl;
    // h.display();

    func (4); //exact match highest priority
    func1 (6); 
    return 0;
}