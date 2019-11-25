#include <iostream>
#include "ring.h"

using namespace std;

int main()
{
    ring<string> textring(3);

    textring.add("one");
    textring.add("two");
    textring.add("three");
    textring.add("four");

    //C++ 98 Style
    for (ring<string>::iterator it = textring.begin(); it != textring.end(); it++)
    {
        cout << *it << endl;
    }

    //C++ 11 Style
    for (auto value : textring)
    {
        cout << value << endl;
    }

    return 0;
}