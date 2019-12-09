#include <iostream>
using namespace std;

class Test
{
    int id{3};
    string name{"Berk"};

public:
    Test() = default;
    Test(const Test &other) = default; //Copy constructor
    Test &operator=(const Test &other) = default;

    Test(int id) : id(id) {}

    void print()
    {
        cout << id << ": " << name << endl;
    }
};

int main()
{

    Test test;
    test.print();

    Test test1(88);
    test1.print();

    Test test2 = test1; //Copy constructor, line 11
    test2.print(); //Using '=' operator, line 12

    return 0;
}