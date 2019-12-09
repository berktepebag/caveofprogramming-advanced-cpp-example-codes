#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int one = 1;
    int two = 2;
    int three = 3;

    []() {};
    //This does not work because lambda runs in it's own scope
    //[](){cout << one << " " << two << endl;};

    //Instead we cpture one and two
    [one, two]() { cout << one << ", " << two << endl; }();

    //Capture all local values
    [=]() { cout << one << ", " << two << endl; }();

    //Capture all local values but three by reference so can be modified
    [=, &three]() {three = 7; cout << one << ", " << two << endl; }();
    cout << "three: " << three << endl;

    //Capture all by reference
    [&]() {three = 5; cout << one << ", " << two << endl; }();
    cout << "three: " << three << endl;

    //Capture all by reference but one and two by value
    [&, one, two]() {three = 99; cout << one << ", " << two << endl; }();
    cout << "three: " << three << endl;

    return 0;
}
