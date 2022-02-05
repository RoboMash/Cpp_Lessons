#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //connecting our filewith hout stream
    ofstream hout("sample60.txt");

    //creatring a name string and filling it with the string entered by the user
    string name;
    cout<<"Enter your name";
    cin>>name;

    //writing a string to the file
    hout<<name + " is my name";
    hout.close();

    ifstream hin("sample60.txt");
    string content;
    hin>>content;
    cout<<"The content of the file is: "<<content<<endl;
    hin.close();

    return 0;
}