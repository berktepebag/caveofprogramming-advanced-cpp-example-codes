#include <iostream>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{

    multimap<int, string> lookup;

    lookup.insert(make_pair(31, "Berk"));
    lookup.insert(make_pair(31, "Mert"));

    lookup.insert(make_pair(30, "Ekin"));
    lookup.insert(make_pair(1, "Balik"));
    lookup.insert(make_pair(2, "Salyangoz"));

    for (multimap<int, string>::iterator it = lookup.begin(); it != lookup.end(); it++)
    {
        cout << it->first << ": " << it->second << endl;
    }

    // C++98
    cout << "C++98" << endl;
    pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its = lookup.equal_range(31);

    for (multimap<int, string>::iterator it = its.first; it != its.second; it++)
    {
        cout << it->first << ": " << it->second << endl;
    }

    cout << "C++11" << endl;
    // C++11
    auto its2 = lookup.equal_range(31);

    for (multimap<int, string>::iterator it = its2.first; it != its2.second; it++)
    {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}
