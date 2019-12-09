#include <iostream>

using namespace std;

void testGreet(void (*greet)(string))
{

    greet("Ekin");
}

void runDivide(double (*pDivide)(double a, double b)) {
    auto rval = pDivide(9,3);
    cout << rval << endl;
}

int main(int argc, char const *argv[])
{
    auto pGreet = [](string name) { cout << "hello " << name << " " << endl; };

    pGreet("Berk");

    testGreet(pGreet);

    //If we dont decleare double after -> compiler cannot decide to return int or double. So we make sure it is returning double.
    auto pDivide = [](double a, double b) -> double { 
        
        if (b==0)
        {
            return 0;
        }
        
        
        return a / b; };

    cout << "Division: " << pDivide(5.0, 3.0) << endl;
    cout << "Division by zero: " << pDivide(5.0, 0.0) << endl;

    runDivide(pDivide);

    return 0;
}
