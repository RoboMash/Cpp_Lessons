#include <iostream>
#include <map>
#include <string>
using namespace std;

//Map is an associative array

int main()
{
    map <string, int> marksMap;
    marksMap["Mash"] = 98;
    marksMap["Jack"] = 59;
    marksMap["Zay"] = 20;

    map<string, int> :: iterator iter;
    
    // for (iter = marksMap.begin(); iter!=marksMap.end(); iter++)
    // {
    //     cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    // }

    marksMap.insert({{"Kozume", 169}, {"Kuroo", 187}});
    for (iter = marksMap.begin(); iter!=marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }

    return 0;
}