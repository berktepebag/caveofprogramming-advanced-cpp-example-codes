#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<string> strings;

    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");

    for (int i = 0; i < strings.size(); i++)
    {
        cout << strings[i] << endl;
    }

    cout << "*********" << endl;

    vector<string> animals = {"lion","tiger","cat","elephant","horse","fox"};

    for(vector<string>::iterator it = animals.begin(); it != animals.end(); it++){

        if(*it == "lion") continue;
        cout << *it << endl;
    }

    

    return 0;
}

