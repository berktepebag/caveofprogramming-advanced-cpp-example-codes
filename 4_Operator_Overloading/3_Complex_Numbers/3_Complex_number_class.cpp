#include <iostream>
#include "Complex.h"

using namespace complexnumbers;
using namespace std;

int main()
{   
    Complex c1();
    Complex c2(2,3);

    Complex c3 = c2;
    c2 = c3;

    cout << c2 << endl;

    return 0;
}