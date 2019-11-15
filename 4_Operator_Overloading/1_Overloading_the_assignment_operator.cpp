#include <iostream>
#include <algorithm>
using namespace std;

class Test
{
    int id;
    string name;

public:
    Test() : id(0), name(""){};
    Test(int id_in, string name_in) : id(id_in), name(name_in) {}

    void print()
    {
        cout << id << ": " << name << endl;
    }

    const Test &operator=(const Test &other)
    {

        cout << "Assignment running" << endl;
        id = other.id;
        name = other.name;

        return *this;
    }

    Test(const Test &other)
    {
        cout << "Copy constructor running" << endl;
        id = other.id;
        name = other.name;
    }
};

int main()
{

    Test test1(10, "Mike");
    cout << "Print Test1: " << flush;
    test1.print();

    Test test2(20, "Bob");
    test2 = test1;
    cout << "Print Test2: " << flush;
    test2.print();

    Test test3;
    // test3 = test2 = test1;

    test3.operator=(test2);
    cout << "Print Test3: " << flush;
    test3.print();

    cout << endl;
    Test test4 = test1;
    test4.print();

    return 0;
}