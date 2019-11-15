#include <iostream>
#include "Complex.h"

using namespace complexnumbers;
using namespace std;

int main()
{

    Complex c1(2, 5);
    Complex c2(3, 4);

    Complex c3 = c1 + c2;

    cout << c3 << endl;

    Complex c4(5, 6);
    Complex c5 = c4 + 7;

    cout << "c5: " << c5 << endl;

    Complex c6(5, 6);
    
    if (c4==c5)
    {
        cout << "Equal" << endl;
    }else
    {
        cout << "Not equal" << endl;
    }

    if (c4!=c6)
    {
        cout << "Not equal" << endl;
    }else
    {
         cout << "Equal" << endl;
    }
    
    
    
    
    return 0;
}