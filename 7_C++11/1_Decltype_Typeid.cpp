#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    string value2;
    int value;
    double v3;

    cout << typeid(value).name() << endl;
    
    cout << typeid(v3).name() << endl;

    decltype(value2) name = "Bob";
    cout << typeid(value2).name() << endl;
    cout << name << endl;

    return 0;
}