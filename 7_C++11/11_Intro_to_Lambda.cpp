#include <iostream>

using namespace std;

void test(void (*pFunc)())
{
    cout << "called inside function: " << endl;
    pFunc();
}

int main()
{
    []() {}; //Valid lambda expression!

    auto func = []() { cout << "hello lambda" << endl; };

    func();

    test(func);

    test([]() { cout << "hello again" << endl; });

    return 0;
}