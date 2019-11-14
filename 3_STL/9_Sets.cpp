#include <iostream>
#include <set>

using namespace std;

class Test
{
private:
    int id;
    string name;

public:
    Test() : id(0), name("") {}
    Test(int id_in, string name_in) : id(id_in), name(name_in)
    {
    }
    void print() const
    {
        cout << id << ": " << name << endl;
    }

    bool operator<(const Test &other) const
    {
        return name < other.name;
    }
};

int main(int argc, char const *argv[])
{
    set<int> numbers;

    numbers.insert(1);
    numbers.insert(1);
    numbers.insert(2);
    numbers.insert(3);

    for (set<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
    {
        cout << *it << endl;
    }

    set<Test> tests;

    tests.insert(Test(10, "Mike"));

    tests.insert(Test(20, "Sue"));

    // Only the first one will be saved
    tests.insert(Test(29, "Joe"));
    tests.insert(Test(30, "Joe"));

    for (set<Test>::iterator it = tests.begin(); it != tests.end(); it++)
    {
        it->print();
    }

    return 0;
}
