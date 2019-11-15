#include <iostream>

using namespace std;

void test()
{
    cout << "Hello" << endl;
}

void test2(int value){
    cout << "Value: " << value << endl;
}

int main(){

    test();
    void(*pTest)() = test;

    pTest();


    test2(2);

    void (*pTest2)(int) = test2;

    pTest2(3);

    return 0;
}
