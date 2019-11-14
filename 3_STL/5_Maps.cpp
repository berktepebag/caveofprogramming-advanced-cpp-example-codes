#include <iostream>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    map<string, int> ages;

    ages["Mike"] = 40;
    ages["Berk"] = 31;
    ages["Ekin"] = 30;

    pair<string, int> addToMap("Alex", 50);
    ages.insert(addToMap);

    ages.insert(pair<string,int>("David",40));

    ages.insert(make_pair("Souza",33));

    if (ages.find("Ekin") != ages.end())
    {
        cout << "Found Ekin" << endl;
    }else
    {
        cout << "Key not found" << endl;
    }


    for (map<string, int>::iterator it=ages.begin(); it != ages.end(); it++)
    {
        pair<string, int> age = *it;

        cout << age.first << ": " << age.second << endl;
    }
    
    cout << "********" << endl;

    for (map<string, int>::iterator it=ages.begin(); it != ages.end(); it++)
    {
        cout << it->first << ": " << it->second << endl;
    }
    

    return 0;
}
