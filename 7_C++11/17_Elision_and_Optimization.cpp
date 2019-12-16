#include <iostream>

using namespace std;

class Test
{
private:
    /* data */
public:
    Test();

    Test(const Test &other);

    Test &operator=(const Test &other)
    {
        cout << "assignment" << endl;
        return *this;
    }

    ~Test();

    friend ostream &operator<<(ostream &out, const Test &test);
};

ostream &operator<<(ostream &out, const Test &Test)
{
    out << "Hello from test";
    return out;
}

Test::Test()
{
    cout << "parameterized constructor" << endl;
}

Test::Test(const Test &other)
{
    cout << "copy constructor" << endl;
}

Test::~Test()
{
    cout << "destructor" << endl;
}

Test getTest() { return Test(); }

int main(int argc, char const *argv[])
{
    // cout << "hello" << endl;

    Test test1 = getTest();

    return 0;
}

// -fno-elide-constructors