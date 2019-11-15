#include <iostream>

using namespace std;

class Test
{
    int id;
    string name;

public:
    Test() : id(0), name(""){}
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

    friend ostream &operator<<(ostream &out, const Test &test)
    {
        out << test.id << ": " << test.name;
        return out;
    }
};

int main()
{

    Test test1(10, "Mike");
    Test test2(18, "Sue");

    //cout goes from left to right:
    //First cout and test1 is taken and returns an ostream object.
    cout << test1 << test2 << endl;

    return 0;
}