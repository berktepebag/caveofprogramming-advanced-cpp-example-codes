#include <iostream>
#include <vector>
#include <memory.h>

using namespace std;

class Test
{
private:
    static const int SIZE = 100;
    int *_pBuffer;

public:
    Test();

    Test(int i);

    Test(const Test &other);

    Test &operator=(const Test &other)
    {
        cout << "assignment" << endl;
        _pBuffer = new int[SIZE]{};
        memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));

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
    cout << "constructor" << endl;
    _pBuffer = new int[SIZE]{};
}

Test::Test(int i)
{
    cout << "parameterized constructor" << endl;
    _pBuffer = new int[SIZE]{};

    for (int i = 0; i < SIZE; i++)
    {
        _pBuffer[i] = 7 * i;
    }
}

Test::Test(const Test &other)
{
    cout << "copy constructor" << endl;
    _pBuffer = new int[SIZE]{};
    memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
}

Test::~Test()
{
    cout << "destructor" << endl;
    delete[] _pBuffer;
}

Test getTest() { return Test(); }

void check(const Test &value)
{
    cout << "lValue function!" << endl;
}

void check(Test &&value)
{
    cout << "rValue function!" << endl;
}

int main(int argc, char const *argv[])
{
    // cout << "hello" << endl;

    Test test1 = getTest();

    cout << test1 << endl;

    vector<Test> vec;
    vec.push_back(Test());

    check(test1); //lValue
    check(getTest()); //rValue
    check(Test()); //rValue

    return 0;
}

// -fno-elide-constructors