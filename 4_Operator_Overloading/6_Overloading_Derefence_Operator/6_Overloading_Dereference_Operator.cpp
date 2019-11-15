#include <iostream>
#include "Complex.h"

using namespace complexnumbers;
using namespace std;

int main()
{

    Complex c1(2, 5);
    
    cout << *c1 << endl;

    cout << *c1 + *Complex(3,2) << endl;

    return 0;
}