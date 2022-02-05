#include <iostream>
#include <fstream>
using namespace std;

/* 
The useful classes for working with files in c++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase

in order to workwith files in c++, you will have to open the files. Primarily there are two ways to open a file:
1. Using the constructor
2. Using the member function open() of the class
*/

int main()
{
    string st = "RoboMash";
    //Opening files using constructor and writing it
    // ofstream out("sample60.txt"); //write operation
    // out<<st;
    
    string st2;
    //Opening files using constructor and reading it
    ifstream in("sample60.txt"); //read operation
    // in>>st2;
    getline(in, st2);
    cout<<st2;

    return 0;
}
