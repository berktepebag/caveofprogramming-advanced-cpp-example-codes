#ifndef RING_H_
#define RING_H_

#include <iostream>
using namespace std;

template<typename T> //<class T> is also valid,  typename accepts primitive type like int, double, string
class ring
{
public:
    class iterator;
};

template<typename T>
class ring<T>::iterator
{
public:
    void print()
    {
        cout << "Hello from iterator: " << T() << endl;
    }

    // void print2();
};

// void ring::iterator::print2()
// {
//     cout << "Hello from iterator print2" << endl;
// }

#endif